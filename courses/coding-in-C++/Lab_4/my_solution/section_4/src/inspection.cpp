/*
* File: inspection.cpp
* Description: Short discription of the file.
*/


#include "../include/inspection.hpp"
#include "../include/product.hpp"


void Inspection::report() const
{
    using namespace std;

    cout << "=== "<< this->get_name() << " Report ===\n";
    cout << "Pass last inspechtion: " << boolalpha << this->passed_last_check << "\n";
    cout << "Successrate: " << this->overal_checks/this->count_succsess_checks << "\n;"
  
}


bool WeightCheck::inspect(Product &product)
{
    bool passed = (product.get_weight() > this->min_weight) &&
                    (product.get_weight() < this->max_weight);

    product.set_pass_weight_check(passed);

    this->passed_last_check = passed;
    this->overal_checks++;
    if (passed == true)
    {
        count_succsess_checks++;
    }

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