/*
 * File: age_validation.cpp
 * Description: this file validats an user input
 */

#include <iostream>
#include <cstdint>

namespace validation
{
    bool is_adult(uint8_t age)
    {
        return age >= 18;
    }

    bool is_senior(uint8_t age)
    {
        return age >=65;
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
            std::cout <<"PLease enter a number.\n";
            std::cin.clear();
            std::cin.ignore();
        }
    }
    

    std::cout <<age;
}
 

 