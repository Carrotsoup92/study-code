/*
* File: healer.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "healer.hpp"

/**
 * @brief Heal a character at a amount of HP
 * *
 * @param[in]   target      The HP of this character get increace
 * 
 * @return      pointer     Pointer to the character
 */
Healer& Healer::heal(Character& target)
{
    if (mana_points > 30)
    {
        target.health_points += 20;
        mana_points -= 30;
        generate_level_ep(this->weapon->get_damage_value());

        std::cout << this->name << " healed: " << target.name << "\n";
    }
    else
    {
        std::cout << this->name << " has not enough MP to heal: " << target.name << "\n";
    }
    return *this;
}