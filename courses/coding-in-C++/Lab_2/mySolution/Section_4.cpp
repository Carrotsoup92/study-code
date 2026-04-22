/*
* File: Section_4.cpp
* Description: Build a fluent drink builder.
*/

#include <iostream>

class DrinkBuilder
{
private:
    std::string name;
    int sugar;
    int temperature;
    bool with_minlk;
    const int MAX_SUGAR;
    const int MIN_SUGAR;
    const int MAX_TEMPERATURE;
    const int MIN_TEMPERATURE;
public:
    DrinkBuilder(int MAX_SUGAR): 
                MAX_SUGAR(MAX_SUGAR), MIN_SUGAR(MIN_SUGAR), 
                MAX_TEMPERATURE(MAX_TEMPERATURE), MIN_TEMPERATURE(MIN_TEMPERATURE)
    ~DrinkBuilder();

    DrinkBuilder& set_name(const std::string& name);
    DrinkBuilder& set_sugar(int sugar);
    DrinkBuilder& set_temperature(int temperature);
    DrinkBuilder& set_with_milk(bool with_milk);
    void print();
};

/**
 * @brief Set name of the drink.
 *
 * @param[in]   name       Name of the drink
 * @return      this       reference to the object            
 */
DrinkBuilder& DrinkBuilder::set_name(const std::string& name)
{
    this->name = name;
    return *this;
}

/**
 * @brief Set the sucar cubes of the drink.
 *
 * @param[in]   sugar           number of sugar cubes
 * @return      this            reference to the object            
 */
DrinkBuilder& DrinkBuilder::set_sugar(int sugar)
{
    if (sugar < MIN_SUGAR)
    {
        this->sugar = MIN_SUGAR;
    }
    else if (sugar > MAX_SUGAR)
    {
        this->sugar = MAX_SUGAR;
    }
    else
    {
        this->sugar = sugar;
    }
    return *this;
}

/**
 * @brief Set the temperature of the drink.
 *
 * @param[in]   temperature     temperature of the drink
 * @return      this            reference to the object            
 */
DrinkBuilder& DrinkBuilder::set_temperature(int temperature)
{
    if (temperature < MIN_TEMPERATURE)
    {
        this->temperature = MIN_TEMPERATURE;
    }
    else if (temperature > MAX_TEMPERATURE)
    {
        this->temperature = MAX_TEMPERATURE;
    }
    else
    {
        this->temperature = temperature;
    }
    return *this;
}


/**
 * @brief Set the milk of the drink.
 *
 * @param[in]   with_milk     milk of the drink
 * @return      this          reference to the object            
 */
DrinkBuilder& DrinkBuilder::set_with_milk(bool with_milk)
{
    this->with_minlk = with_milk;
    return *this;
}



int main() {
    
    DrinkBuilder& Drink(5, 0, 100, 1);


    return 0;
}