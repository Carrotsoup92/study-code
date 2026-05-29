/*
* File: product.cpp
* Description: Short discription of the file.
*/

#include <iostream>

#include "../include/product.hpp"

/**
 * @brief Create report of all tests
 */
void CombustionEngine::report() const
{
    using namespace std;

    cout << "=== Combustion Engine Report ===\n";
    cout << "ID: " << this->get_id() << "\n";
    cout << "Weight check passed:      " << boolalpha << this->pass_weight_check << "\n";
    cout << "Visual inspection passed: " << boolalpha << this->pass_visual_inspection << "\n";
    cout << "Temperature test passed:  " << boolalpha << this->pass_temperature_test << "\n";
}


/**
 * @brief Create report of all tests
 */
void ElectricEngine::report() const
{
    using namespace std;

    cout << "=== Electric Engine Report ===\n";
    cout << "ID: " << this->get_id() << "\n";
    cout << "Weight check passed:      " << boolalpha << this->pass_weight_check << "\n";
    cout << "Visual inspection passed: " << boolalpha << this->pass_visual_inspection << "\n";
    cout << "Temperature test passed:  " << boolalpha << this->pass_temperature_test << "\n";
}
