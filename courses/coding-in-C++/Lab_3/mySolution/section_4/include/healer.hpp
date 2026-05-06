/*
* File: healer.hpp
* Description: Shot discription of the file.
*/

#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include <string>

#include <mage.hpp>

class Healer : protected Mage
{
    friend class Character;
private:
protected:
public:
    Healer();  // Constructor
    ~Healer() = default; // Destructor

    Healer& heal(Character target);
};

#endif