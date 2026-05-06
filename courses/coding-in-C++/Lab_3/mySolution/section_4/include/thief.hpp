/*
* File: thief.hpp
* Description: Shot discription of the file.
*/

#ifndef THIEF_H
#define THIEF_H

#include <iostream>
#include <string>

#include <warrior.hpp>

class Thief : protected Warrior
{
private:
protected:
public:
    Thief();  // Constructor
    ~Thief() = default; // Destructor

    Thief& steal(Character target);
};

#endif