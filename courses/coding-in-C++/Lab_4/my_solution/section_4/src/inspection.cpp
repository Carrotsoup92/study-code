/*
* File: inspection.cpp
* Description: Short discription of the file.
*/


#include "../include/inspection.hpp"
#include "../include/product.hpp"



bool WeightCheck::inspect(Product &product)
{
    bool passed = (product.get_weight() > this->min_weight) &&
                    (product.get_weight() < this->max_weight);

    product.set_pass_weight_check(passed);

    return passed;
}
 

bool VisualInspection::inspect(Product &product)
{
    bool passed = product.get_visual_defect_status();
    
    product.set_pass_visual_inspection(passed);
    
    return passed;
}


bool TemperatureTest::inspect(Product &product)
{
    bool passed = (product.get_temperature() > this->min_temperature) &&
                    (product.get_temperature() < this->max_temperature);
    
    product.set_pass_temperature_test(passed);

    return passed;
}