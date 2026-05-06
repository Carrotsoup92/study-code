/*
* File: mage.hpp
* Description: Shot discription of the file.
*/

#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>

#include "character.hpp"

class Mage :protected Character
{
private:
protected:
    int mana_points;
public:
    Mage():mana_points(0)
    {};  // Constructor
    ~Mage() = default; // Destructor

    void generate_mp();
};

#endif