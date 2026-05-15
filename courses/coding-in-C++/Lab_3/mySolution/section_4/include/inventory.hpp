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
    int count_items;

public:
    Inventory(): count_items(0)
    {};  // Constructor
    ~Inventory() = default; // Destructor

    int get_max_stots() const
    {
        return MAX_SLOTS;
    }

    int get_count_items() const
    {
        return count_items;
    }

    const std::string* get_items() const
    {
        return items;
    }

    bool is_empty() const
    {
        return (this->count_items == 0);
    }

    bool is_full() const
    {
        return (this->count_items == this->MAX_SLOTS);
    }

    std::string get_last_item()
    {
        return items[this->count_items -1];
    }

    Inventory& add_item(const std::string& item);
    Inventory& remove_last_item();
};

#endif