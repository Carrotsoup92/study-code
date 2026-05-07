/*
* File: mage.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "mage.hpp"

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
void Mage::print_stats() const
{
    using namespace std;

    cout << "Class: " << get_type() << "\n";

    Character::print_stats();

    cout << "WSP: " << this->mana_points << "\n";
}


Mage& Mage::generate_mp(int points)
{
    this->mana_points += points;

    return *this;
}