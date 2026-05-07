/*
* File: main.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "character.hpp"
#include "warrior.hpp"
#include "mage.hpp"


int main() {
    
    Warrior warrior("Dude");
    // Mage mage("Mate");

    warrior.generate_wsp(10)
           .print_stats();

    // mage.print_stats();

    return 0;
}