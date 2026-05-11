/*
* File: warrior.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "warrior.hpp"

/**
 * @brief Print current stats
 */
void Warrior::print_stats() const
{
    using namespace std;

    Character::print_stats();

    cout << "WSP: " << this->weapon_skill_points << "\n";

    cout << "------------------" << "\n";
}


/**
 * @brief Generates weapon skill pints 
 * 
 * @param[in]   points      Experience points to add
 * 
 * @return      pointer     Pointer to the character
 */
Warrior& Warrior::generate_wsp(int points)
{
    this->weapon_skill_points += points;

    return *this;
}