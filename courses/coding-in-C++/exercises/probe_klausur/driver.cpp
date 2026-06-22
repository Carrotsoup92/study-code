
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

#include "driver.hpp"

void Driver::add_licens(std::string& license)
{
    this->licences.push_back(license);
}

void Driver::remove_licence(std::string& licnese)
{

    if(none_of(this->licences.begin(), this->licences.end(), licnese))
    {
        std::cout << "Error" << "\n";
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

void Driver::rent_car(Vehicle& Vehicle)
{
    
}