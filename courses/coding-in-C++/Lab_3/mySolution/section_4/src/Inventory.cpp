/*
* File: inventory.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "inventory.hpp"

/**
 * @brief Calculates the average temperature.
 *
 * Returns the arithmetic mean of all valid sensor values.
 * Invalid sensor values are ignored.
 *
 * @param[in] values       Array of sensor values
 * @param[in,out] value_count  Number of elements in values
 * @return                 Average of valid values
 */
Inventory& Inventory::add_item(const std::string& item)
{
    items[this->count_items] = item;
    this->count_items += 1;

    return *this;
}

Inventory& Inventory::remove_last_item()
{
    items[this->count_items] = "";
    this->count_items -= 1;

    return *this;
}