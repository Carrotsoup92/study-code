/*
* File: main.cpp
* Description: Short discription of the file.
*/


#include "../include/inspection.hpp"
#include "../include/product.hpp"
#include "../include/pipline.hpp"


int main()
{
    CombustionEngine combustion_engine_1(1001, 55.4, 66.7, false);
    CombustionEngine combustion_engine_2(1002, 40.4, 92.7, true);

    ElectricEngine electric_engine_1(2001, 55.4, 92.7, true, 12.5);
    ElectricEngine electric_engine_2(2002, 92.4, 92.7, false, 11.3);

    Product *p_pruducts[] = {&combustion_engine_1,
                            &combustion_engine_2,
                            &electric_engine_1,
                            &electric_engine_2};


    WeightCheck weight_check(50.0, 90.0);
    VisualInspection visual_inspection;
    TemperatureTest temperature_test(70, 89);

    Pipline pipline;
    pipline.add_inspection(&weight_check);
    pipline.add_inspection(&visual_inspection);
    pipline.add_inspection(&temperature_test);


    for (Product *temp : p_pruducts)
    {
       pipline.inspect(*temp);
    }

    return 0;
}