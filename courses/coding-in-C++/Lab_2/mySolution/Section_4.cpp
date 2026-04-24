/*
* File: Section_4.cpp
* Description: Build a fluent drink builder.
*/

#include <iostream>
#include <string>

class DrinkBuilder
{
private:
    std::string name;
    int sugar;
    int temperature;
    bool with_milk;
    const int MAX_SUGAR;
    static constexpr int MIN_SUGAR = 0;
    static constexpr int MAX_TEMPERATURE = 80;
    static constexpr int MIN_TEMPERATURE = 1;
    static constexpr int DEFAULT_TEMPERATURE = 25;
public:
    DrinkBuilder(int MAX_SUGAR): 
                name(""), sugar(0), temperature(1), with_milk(false),
                MAX_SUGAR(MAX_SUGAR)
                {};
    ~DrinkBuilder() = default;

    DrinkBuilder& set_name(const std::string& name);
    DrinkBuilder& set_sugar(int sugar);
    DrinkBuilder& set_temperature(int temperature);
    DrinkBuilder& set_with_milk(bool with_milk);
    const DrinkBuilder& valid() const;
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
        this->temperature = DEFAULT_TEMPERATURE;
    }
    else if (temperature > MAX_TEMPERATURE)
    {
        this->temperature = DEFAULT_TEMPERATURE;
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

const DrinkBuilder& DrinkBuilder::valid(void) const
{
    return *this;
}

void DrinkBuilder::print(void) const
{
    using namespace std;

    cout << "Your dring configuration.\n";
    cout << "Drink: " << name << "\n";
    cout << "Sugar: " << sugar << "\n";
    cout << "Temperature: " << temperature << "\n";
    cout << "With milk: " << boolalpha << with_milk << "\n";
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