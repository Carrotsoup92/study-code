/*
* File: inventory.hpp
* Description: Shot discription of the file.
*/

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

class Inventory 
{
private:
    static constexpr int MAX_SLOTS = 10;
    std::string items[MAX_SLOTS];

public:
    Inventory();  // Constructor
    ~Inventory() = default; // Destructor

    Inventory& get_inventory();
    bool is_emty() const;
    bool is_full() const;
    bool add_item(std::string[10]);
    bool remove_last_item(std::string[10]);
};

#endif