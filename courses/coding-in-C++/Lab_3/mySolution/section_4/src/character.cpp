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

    cout << "Name:  " << this->name << "\n";
    cout << "Level: " << this->level << "\n";
    cout << "HP: " << this->health_points << "\n";
    //weappon
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