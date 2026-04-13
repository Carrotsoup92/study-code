/*
 * File: age_validation.cpp
 * Description: this file validats an user input
 */

#include <iostream>
#include <cstdint>
#include <limits>

namespace validation
{

    const uint8_t ADULT = 18;
    const uint8_t SENIOR = 65;

    bool is_adult(uint8_t age)
    {
        if (age >= ADULT)
        {
            return true;
        }
        return false;
    }

    bool is_senior(uint8_t age)
    {
        if (age >= SENIOR)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    int age = 0;

    std::cout <<"Please enter your age: ";

    while(true)
    {   
        // if not a number or to large for int
        if (!(std::cin >>age))
        {
            std::cout << "PLease enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } 
        else if (age < 0)
        {
            std::cout << "Please enter a positive number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else 
        {
            std::cout << "You are " << age  << " years old.\n";
            break;
        }
    }
    
    if (validation::is_senior(static_cast<uint8_t>(age)))
    {
        std::cout << "That means that you are a senior.";
    } 
    else if (validation::is_adult(static_cast<uint8_t>(age)))
    {
        std::cout << "That means that you are an andult.";
    } else 
    {
        std::cout << "That means you are still a kid or teenager.";
    }
    
    return 0;
}
 

 