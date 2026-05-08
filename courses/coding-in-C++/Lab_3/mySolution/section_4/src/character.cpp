/*
* File: charackter.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "character.hpp"


/**
 * @brief Print current stats
 */
void Character::print_stats() const
{
    using namespace std;

    cout << "--------------------------" << "\n";
    cout << "Class: " << get_type() << "\n";
    cout << "Name:  " << this->name << "\n";
    cout << "Level: " << this->level << "\n";
    cout << "level EP: " << this->level_ep << "\n";
    cout << "HP: " << this->health_points << "\n";
    if (weapon == nullptr)
    {
        cout << "Weapon: " << "No weapon." << "\n";
        cout << "Weapon damage: " << "0" << "\n";
    }
    else
    {
            cout << "Weapon: " << this->weapon->get_name() << "\n";
            cout << "Weapon damage: " << this->weapon->get_damage_value() << "\n";

    }
    //inventory
}


/**
 * @brief Generates level ep 
 * 
 * Checks also whether is it possiple to get a level up
 * 
 * @param[in]   ep          Experience points to add
 * 
 * @return      pointer     Pointer to the character
 */
Character& Character::generate_level_ep(int ep)
{
    this->level_ep += ep;

    if (level_ep > 50)
    {
        Character::level_up();
    }

    return *this;
}


/**
 * @brief Increace the level by one step
 */
void Character::level_up()
{
    if (level < MAX_LEVEL)
    {
        this->level += 1;
        this->level_ep -= 50;
    }
}


/**
 * @brief Attack a target
 * 
 * @param[in]   target      The target who is attacked
 * 
 * @return      pointer     Pointer to the character
 */
Character& Character::attack(Character& target)
{
    return *this;
}

Character& Character::set_weapon(Weapon* weapon)
{
    this->weapon = weapon;

    return *this;
}