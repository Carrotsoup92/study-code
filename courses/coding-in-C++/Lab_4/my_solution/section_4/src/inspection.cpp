/*
* File: inspection.cpp
* Description: Short discription of the file.
*/


#include "../include/inspection.hpp"
#include "../include/product.hpp"


void Inspection::report() const
{
    using namespace std;

    double success_rate = 0;

    if (this->count_succsess_checks == 0)
    {
        success_rate = 0;
    }
    else
    {
        success_rate = static_cast<double>(this->count_succsess_checks) / this->overal_checks * 100;
    }

    cout << "=== "<< this->get_name() << " Report ===\n";
    cout << "Pass last inspechtion: " << boolalpha << this->passed_last_check << "\n";
    cout << "Successrate: " << success_rate << "%" << "\n";
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
    
    this->passed_last_check = passed;
    this->overal_checks++;
    if (passed == true)
    {
        count_succsess_checks++;
    }

    return passed;
}


bool TemperatureTest::inspect(Product &product)
{
    bool passed = (product.get_temperature() > this->min_temperature) &&
                    (product.get_temperature() < this->max_temperature);
    
    product.set_pass_temperature_test(passed);

    this->passed_last_check = passed;
    this->overal_checks++;
    if (passed == true)
    {
        count_succsess_checks++;
    }

    return passed;
}