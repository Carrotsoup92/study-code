/*
* File: main.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "character.hpp"
#include "warrior.hpp"
#include "mage.hpp"
#include "thief.hpp"
#include "weapon.hpp"


int main() {
    
    Warrior *warrior = new Warrior("Dude");
    Mage *mage = new Mage("Mate");
    Thief *thief = new Thief("Pal");


    warrior->generate_wsp(10)
           .generate_level_ep(55)
           .set_weapon(new Weapon("sword", 20))
           .print_stats();

    mage->generate_mp(20)
        .attack(*thief)
        .set_weapon(new Weapon("wand", 10))
        .attack(*thief)
        .print_stats();

    thief->generate_wsp(15)
         .print_stats();

    


    delete warrior;
    delete mage;
    delete thief;

    return 0;
}