/*
* File: inspection.cpp
* Description: Short discription of the file.
*/

#include <iostream>
#include <string>

#include "../include/inspection.hpp"
#include "../include/product.hpp"

bool WeightCheck::inspect(const Product &product) const
{
    std::cout << this->get_name() << ": " << product.get_name(); 

    return true;
}