/*
* File: thief.hpp
* Description: Shot discription of the file.
*/

#ifndef THIEF_H
#define THIEF_H

#include <iostream>
#include <string>

#include <warrior.hpp>

class Thief : public Warrior
{
private:
protected:
public:
    Thief(std::string name): Warrior(name)
    {};  // Constructor
    ~Thief() = default; // Destructor


    /**
     * @brief Return the type of the character 
     * 
     * @return      string     Name of the type
     */
    std::string get_type() const override
    {
        return "Thief";
    }

    Thief& steal(Character& target);
};

#endif