/*
* File: main.cpp
* Description: Short discription of the file.
*/

#include <iostream>
#include <string>

#include "../include/inspection.hpp"
#include "../include/product.hpp"


int main()
{
    CombustionEngine combustion_engine(01, "Engine_1", 55.4, 66.7, false);

    WeightCheck weight_check(50.0, 90.0);

    bool passed = weight_check.inspect(combustion_engine);


    return 0;
}