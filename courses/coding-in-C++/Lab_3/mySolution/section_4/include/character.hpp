/*
* File: character.hpp
* Description: Shot discription of the file.
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "inventory.hpp"
#include "weapon.hpp"

class Healer;

class Character 
{
private:
    int health_points;

    friend class Healer;
protected:
    std::string name;
    int level;
    static constexpr int MAX_LEVEL = 10;
    int level_ep;
    Weapon* weapon;
    Inventory inventory;

    void level_up();
public:
    Character(std::string name): name(name), health_points(100), level(1),
                             level_ep(0), weapon(nullptr), inventory()
    {};  // Constructor
    virtual ~Character()
    {
        delete weapon;
    }; // Destructor

    virtual std::string get_type() const = 0;
    virtual void print_stats() const;

    Character& generate_level_ep(int ep);
    Character& attack(Character& target);
    Character& set_weapon(Weapon* weapon);
};

#endif