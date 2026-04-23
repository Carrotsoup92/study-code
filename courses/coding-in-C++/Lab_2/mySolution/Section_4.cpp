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
    bool with_milk;
    const int MAX_SUGAR;
    const int MIN_SUGAR;
    const int MAX_TEMPERATURE;
    const int MIN_TEMPERATURE;
public:
    DrinkBuilder(int MAX_SUGAR): 
                name(" "), sugar(0), temperature(1), with_milk(false),
                MAX_SUGAR(MAX_SUGAR), MIN_SUGAR(0), MAX_TEMPERATURE(100), MIN_TEMPERATURE(1)
    ~DrinkBuilder();

    DrinkBuilder& set_name(const std::string& name);
    DrinkBuilder& set_sugar(int sugar);
    DrinkBuilder& set_temperature(int temperature);
    DrinkBuilder& set_with_milk(bool with_milk);
    DrinkBuilder& valid();
    void print() const;
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
    this->with_milk = with_milk;
    return *this;
}

DrinkBuilder& DrinkBuilder::valid() 
{
    return *this;
}

void DrinkBuilder::print() const
{
    
}


int main() {
    
    DrinkBuilder drink(5);

    drink.set_name("Tea")
         .set_sugar(3)
         .set_temperature(80)
         .set_with_milk(false)
         .valid()
         .print();
         
    return 0;
}