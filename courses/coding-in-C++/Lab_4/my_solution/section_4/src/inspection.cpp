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
    bool passed = (product.get_weight() > this->min_weight) &&
                    (product.get_weight() < this->max_weight);

    std::cout << product.get_id() << "\n";


    return passed;
}
 

bool VisualInspection::inspect(const Product &product) const
{
    bool passed = product.get_visual_defect_status();
    
    std::cout << product.get_id() << this->get_name() << "\n";
    
    return passed;
}


bool TemperatureTest::inspect(const Product &product) const
{
    bool passed = (product.get_temperature() > this->min_temperature) &&
                    (product.get_temperature() < this->max_temperature);

    std::cout << product.get_id() << "\n";


    return passed;
}