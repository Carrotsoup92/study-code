/*
* File: warrior.hpp
* Description: Shot discription of the file.
*/

#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "character.hpp"
#include "inventory.hpp"

class Warrior : public Character
{
private:
protected:
    int weapon_skill_points;
public:
    Warrior(std::string name): Character(name), weapon_skill_points(0)
    {};  // Constructor
    virtual ~Warrior() = default; // Destructor

    /**
     * @brief Return the type of the character 
     * 
     * @return      string     Name of the type
     */
    std::string get_type() const override
    {
        return "Warrior";
    }
    
    void print_stats() const override;

    Warrior& generate_wsp(int points);
};

#endif  