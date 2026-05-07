/*
* File: mage.hpp
* Description: Shot discription of the file.
*/

#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>

#include "character.hpp"

class Mage :public Character
{
private:
protected:
    int mana_points;
public:
    Mage(std::string name): Character(name), mana_points(0)
    {};  // Constructor
    ~Mage() = default; // Destructor

    Mage& generate_mp(int points);
    
    std::string get_type() const override
    {
        return "Mage";
    }

    void print_stats() const override;
};

#endif