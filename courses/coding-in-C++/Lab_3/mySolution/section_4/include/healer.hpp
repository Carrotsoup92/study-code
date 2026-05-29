/*
* File: healer.hpp
* Description: Shot discription of the file.
*/

#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include <string>

#include "character.hpp"
#include "mage.hpp"


class Healer : public Mage
{
private:
protected:
public:
    Healer(std::string name): Mage(name)
    {};  // Constructor
    ~Healer() = default; // Destructor

    std::string get_type() const override
    {
        return "Healer";
    }

    Healer& heal(Character& target);
};

#endif
