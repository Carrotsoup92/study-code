/*
* File: mage.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "mage.hpp"

/**
 * @brief Print current stats
 */
void Mage::print_stats() const
{
    using namespace std;

    Character::print_stats();

    cout << "MP: " << this->mana_points << "\n";
}


Mage& Mage::generate_mp(int points)
{
    this->mana_points += points;

    return *this;
}