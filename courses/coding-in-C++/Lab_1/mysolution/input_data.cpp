/*
 * File: input_data.cpp
 * Description: validate user input
 */

#include <iostream>
#include <cstdint>
#include <limits>

#include "input_data.hpp"


void read_student_data(std::string& name, double& homework, double& midterm, double& finalExam)
{
    std::cout << "Please enter student name: "; 
    while (true)
    {
        std::getline(std::cin, name);
        if (name.empty())
        {
            std::cout << "Invalid name! Please try again!\n";
        }
        else
        {
            break;
        }
    }

    std::cout << "Please enter homework, midterm and final exam grads: ";
    while (true)
    {
        if (!(std::cin >>homework >>midterm >>finalExam))
        {
            std::cout << "Please enter a number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (homework <0|| homework >100 || midterm <0 || midterm >100 || finalExam <0 || finalExam >100)
        {
            std::cout << "Please enter a valid number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else
        {
            break;
        }
    }
}