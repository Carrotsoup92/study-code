/*
* File: charackter.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "character.hpp"

/**
 * @brief Increace the lecel by one step
 */
void Character::level_up()
{
    if (level < MAX_LEVEL)
    {
        this->level += 1;
    }
}

/**
 * @brief Print current stats
 */
void Character::print_stats() const
{
    using namespace std;

    cout << "Name:  " << name << "\n";
    cout << "Level: " << level << "\n";
    cout << "HP: " << health_points << "\n";
}