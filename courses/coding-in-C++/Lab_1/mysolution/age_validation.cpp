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
        const int ADULT = 18;

        if (age >= ADULT)
        {
            return true;
        }
        return false;
    }

    bool is_senior(uint8_t age)
    {
        const int SENIOR = 65;

        if (age >= SENIOR)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    const int MAX_AGE = 150;
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
        } 
        else if (age > MAX_AGE)
        {
            std::cout << "Your number is unrealitic. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "You are " << age  << " years old.\n";
            break;
        }
    }
    
    if (validation::is_senior(static_cast<uint8_t>(age)))
    {
        std::cout << "That means that you are a senior.\n";
    } 
    else if (validation::is_adult(static_cast<uint8_t>(age)))
    {
    std::cout << "That means that you are an andult.\n";
    } 
    else 
    {
        std::cout << "That means you are still a kid or teenager.\n";
    }
    
    return 0;
}
 

 