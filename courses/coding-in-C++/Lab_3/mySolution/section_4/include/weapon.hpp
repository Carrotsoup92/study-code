/*
* File: weapon.hpp
* Description: Shot discription of the file.
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
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
};

#endif