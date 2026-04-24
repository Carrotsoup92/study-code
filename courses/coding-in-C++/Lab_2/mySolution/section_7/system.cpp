/*
* File: system.cpp
* Description: Shot discription of the file.
*/

#include <iostream>

#include "system.hpp"

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
void System::add_query(void)
{
    total_queries += 1;
}

void System::print_statistics(void) const
{
    std::cout << total_queries << "\n";
}