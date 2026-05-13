/*
* File: healer.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "healer.hpp"

/**
 * @brief Calculates the average temperature.
 *
 * Returns the arithmetic mean of all valid sensor values.
 * Invalid sensor values are ignored.
 *
 * @param[in] values       Array of sensor values
 * @param[in,out] value_count  Number of elements in values
 * @return                 Average of valid values
 */
Healer& Healer::heal(Character& target)
{
    if (mana_points > 30)
    {
        target.health_points += 20;
        std::cout << this->name << " healed: " << target.name << "/n";
    }
    else
    {
        std::cout << this->name << " has not enough MP to heal: " << target.name << "\n";
    }
    return *this;
}