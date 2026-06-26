

#include <iostream>
#include <string>

#include "vehicle.hpp"

void PKW::print_info() const
{
    using namespace std;

    cout << "Type:              " << this->get_type() << "\n";
    cout << "Brand:             " << this->get_brand() << "\n";
    cout << "Consumption:       " << this->get_consumtion() << "\n";
    cout << "Aviable            " << std::boolalpha << this->get_aviable() << "\n";
    cout << "Nedded Licnese:    " << this->get_needed_license() << "\n";
    cout << "Assigned Driver:   " << this->get_assigned_driver() << "\n";
}

void ElectricCar::print_info() const
{
    using namespace std;

    cout << "Type:              " << this->get_type() << "\n";
    cout << "Brand:             " << this->get_brand() << "\n";
    cout << "Battery Capacity:  " << this->get_battery_capacity() << "\n";
    cout << "Aviable            " << std::boolalpha << this->get_aviable() << "\n";
    cout << "Nedded Licnese:    " << this->get_needed_license() << "\n";
    cout << "Assigned Driver:   " << this->get_assigned_driver() << "\n";
}