/*
* File: character.cpp
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

    cout << "--------STATS----------" << "\n";
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
    cout << "Items in inventory: " << this->inventory.get_count_items() << "/" << this->inventory.get_max_stots() << "\n";
    
    for (int index = 0; index < this->inventory.get_count_items(); index++)
    {
        cout << this->inventory.get_items()[index] << ", ";
    }
    cout << "\n";
}


std::string Character::get_type() const 
{
    return "Character";
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
    const int level_step = 50;

    while (this->level_ep >= level_step)
    {
        if (level_ep > level_step)
        {
            Character::level_up();
        }
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

        std::cout << this->name << " get level up." << "\n";
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
    if (this->weapon == nullptr)
    {
        std::cout << this->name << " cannot attck, no weapon!\n";
    }
    else
    {
        target.health_points -= this->weapon->get_damage_value();
        generate_level_ep(this->weapon->get_damage_value());

        std::cout << this->name << " attacked: " << target.name << "\n";
    }

    return *this;
}


/**
 * @brief Set Weapon of the character
 * 
 * @param[in]   weapon      New weapon of the character
 * 
 * @return      pointer     Pointer to the character
 */
Character& Character::set_weapon(Weapon* weapon)
{
    this->weapon = weapon;

    return *this;
}