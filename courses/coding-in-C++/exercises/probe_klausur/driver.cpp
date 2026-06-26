
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <memory>

#include "driver.hpp"
// #include "vehicle.hpp"

void Driver::add_licens(const std::string& license)
{
    this->licences.push_back(license);
}

void Driver::remove_licence(std::string& licnese)
{

    auto search = [&] (const std::string l)
    {
        return l == licnese;
    };

    if(none_of(this->licences.begin(), this->licences.end(), search))
    {
        std::cout << "Error remove_license" << "\n";
    }
    else
    {
        auto it = find(this->licences.begin(), this->licences.end(), licnese);
        if( it != this->licences.end())
        {
            this->licences.erase(it);
        }
    }
}

bool Driver::check_license(std::string& license)
{

    auto search = [&] (const std::string l)
    {
        return l == license;
    };

    if (any_of(this->licences.begin(), this->licences.end(), search))
    {
        return true;
    }
    return false;
}

void Driver::rent_car(std::shared_ptr<Vehicle> vehicle)
{
    if(vehicle->get_aviable() == false)
    {
        std::cout << "Error rent_car" << "\n";
        return;
    }

    if(this->vehicle != nullptr)
    {
        std::cout << "Error rent_car" << "\n";
        return;
    }

    auto nessesary_lisence = vehicle->get_needed_license();
    if(check_license(nessesary_lisence) == false)
    {
        std::cout << "Error rent_car" << "\n";
        return;
    }

    this->vehicle = vehicle;

    this->vehicle->set_aviable(false);
    
    name = this->get_name();
    vehicle->set_assigned_driver(name);
}