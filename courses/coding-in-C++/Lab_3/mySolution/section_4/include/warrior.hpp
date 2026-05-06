/*
* File: warrior.hpp
* Description: Shot discription of the file.
*/

#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

# include "character.hpp";

class Warrior : public Character
{
private:
protected:
    int weapon_skill_points;
public:
    Warrior(): weapon_skill_points(0)
    {};  // Constructor
    ~Warrior() = default; // Destructor

    void generate_wsp();
};

#endif  