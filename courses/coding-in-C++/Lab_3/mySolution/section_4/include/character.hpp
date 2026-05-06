/*
* File: character.hpp
* Description: Shot discription of the file.
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "inventory.hpp"

class Weapon;

class Character 
{
private:
    std::string name;
protected:
    int health_points;
    int level;
    static constexpr int MAX_LEVEL = 10;
    Weapon* weapon;
    Inventory inventory;
public:
    Character(std::string name): name(name), health_points(100), level(1)
    {};  // Constructor
    ~Character() = default; // Destructor

    virtual std::string get_type() const = 0;
    virtual void print_stats() const;

    void level_up();
};

#endif