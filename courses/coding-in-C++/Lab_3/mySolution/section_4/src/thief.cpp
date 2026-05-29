/*
* File: thief.cpp
* Description: Shot discription of the file.
*/

#include <iostream>

#include "thief.hpp"


static void steal_succes(Character& thief ,Character& target)
{
    
    if (thief.get_inventory().is_full())
    {
        std::cout << "Cannot steal, inventory is full\n";
    }
    else if (target.get_inventory().is_empty())
    {
        std::cout << "Cannot steal, target name inventory is empty\n";
    }
    else 
    {
        std::string temp = target.get_inventory().get_last_item();
        
        target.get_inventory().remove_last_item();

        thief.get_inventory().add_item(temp);
    }
}   
    
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
Thief& Thief::steal(Character& target)
{
    static const int MULTIPLER = 10;
    int required_WSP = target.get_level() * MULTIPLER;

    if(required_WSP > this->weapon_skill_points)
    {
        std::cout << "Cannot steal, not enough WSP!\n";
    }
    else
    {
        steal_succes(*this, target);
        std::cout << this->name << " stole: " << "\n";
        
        this->weapon_skill_points += required_WSP;
    }

    return *this;
}

