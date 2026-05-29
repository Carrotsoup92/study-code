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

    cout << "-----------------------" << "\n";

}


/**
 * @brief Add mana points
 * 
 * @param[in]   points      Add this points to mana
 * 
 * @return      pointer     Pointer to the character
 */
Mage& Mage::generate_mp(int points)
{
    this->mana_points += points;

    return *this;
}