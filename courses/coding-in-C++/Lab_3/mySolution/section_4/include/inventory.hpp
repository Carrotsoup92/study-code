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
    Inventory() = default;  // Constructor
    ~Inventory() = default; // Destructor

    Inventory& get_inventory();
    bool is_emty() const;
    bool is_full() const;
    Inventory& add_item(std::string);
    bool remove_last_item();
};

#endif