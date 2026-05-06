/*
* File: warrior.hpp
* Description: Shot discription of the file.
*/

#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "character.hpp"

class Warrior : public Character
{
private:
protected:
    int weapon_skill_points;
public:
    Warrior(std::string name): Character(name), weapon_skill_points(0)
    {};  // Constructor
    ~Warrior() = default; // Destructor

    std::string get_type() const override
    {
        return "Warrior";
    }
    
    void generate_wsp(int points)
    {
        weapon_skill_points += points;
    }

    void print_stats() const;
};

#endif  