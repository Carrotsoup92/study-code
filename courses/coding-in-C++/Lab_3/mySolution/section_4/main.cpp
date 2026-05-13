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
#include "healer.hpp"

#include "weapon.hpp"


int main() {
    
    Warrior *warrior = new Warrior("Dude");
    Mage *mage = new Mage("Mate");
    Thief *thief = new Thief("Pal");
    Healer *healer = new Healer("Bro");

    warrior->generate_wsp(10)
           .generate_level_ep(55)
           .set_weapon(new Weapon("sword", 20));

    mage->generate_mp(20)
        .attack(*thief)
        .set_weapon(new Weapon("wand", 10))
        .attack(*thief);

    thief->generate_wsp(15)
         .set_weapon(new Weapon("knife", 10))
         .attack(*warrior);

    healer->generate_mp(50)
          .set_weapon(new Weapon ("stick", 5))
          .generate_level_ep(60)
          .heal();

    warrior->print_stats();
    mage->print_stats();
    thief->print_stats();
    healer->print_stats();
          
    delete warrior;
    delete mage;
    delete thief;
    delete healer;

    return 0;
}