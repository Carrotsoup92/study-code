/*
* File: weapon.hpp
* Description: Shot discription of the file.
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon 
{
private:
    std::string name;
    int damage_value;
public:
    Weapon(std::string name, int damage_value): name(name), damage_value(damage_value)
    {};  // Constructor
    ~Weapon() = default; // Destructor

    std::string get_name() const
    {
        return name;
    }

    int get_damage_value() const
    {
        return damage_value;
    }
};

#endif