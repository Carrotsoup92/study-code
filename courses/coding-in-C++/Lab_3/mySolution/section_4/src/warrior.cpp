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

    cout << "Class: " << get_type() << "\n";

    Character::print_stats();

    cout << "WSP: " << weapon_skill_points << "\n";
}