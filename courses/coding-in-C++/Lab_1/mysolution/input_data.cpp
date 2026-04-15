/*
 * File: input_data.cpp
 * Description: validate user input
 */

#include <iostream>
#include <cstdint>
#include <limits>
#include <iomanip>

#include "input_data.hpp"


void read_student_data(std::string& name, double& homework, 
                        double& midterm, double& finalExam)
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

    std::cout << "Please enter homework, midterm and final exam grades: ";

    const double MAX_GRADE = 100;
    const double MIN_GRADE = 0;

    while (true)
    {
        if (!(std::cin >>homework >>midterm >>finalExam))
        {
            std::cout << "Please enter a number\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (homework < MIN_GRADE || homework > MAX_GRADE || 
                midterm < MIN_GRADE || midterm > MAX_GRADE || 
                finalExam < MIN_GRADE || finalExam > MAX_GRADE)
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

void calculateGrade(const double& homework, const double& midterm, const double& finalExam, 
                    double& finalGrade, std::string& letterGrade)
{
    finalGrade = (homework * 0.4) + (midterm * 0.25) + (finalExam * 0.35);

    if (finalGrade >= 90)
    {
        letterGrade = "A";
    } 
    else if (finalGrade >= 80)
    {
        letterGrade = "B";
    } 
    else if (finalGrade >= 70)
    {
        letterGrade = "C";
    }
    else if (finalGrade >= 60)
    {
        letterGrade = "D";
    }
    else if (finalGrade >= 50)
    {
        letterGrade = "E";
    }
    else 
    {
        letterGrade = "F";
    }
}

const void print_grade(const std::string& subject, const double& grade)
{
        std::cout <<std::left << std::setw(20) << subject << ": " << std::setprecision(2) << grade << "\n";
}

const void dash_line()
{
    std::cout <<std::setfill('-') <<std::setw(40) << "" << "\n";
    std::cout <<std::setfill(' ');
}

void printReport(const std::string& name, const double& homework, 
                const double& midterm, const double& finalExam,
                const double& finalGrade, const std::string& letterGrade)
{
    std::string status;
    
    if (letterGrade == "A" || letterGrade == "B" || letterGrade == "C")
    {
        status = "PASS";
    }
    else if ( letterGrade == "D" || letterGrade == "E")
    {
        status = "CONDITIONAL PASS";
    }
    else 
    {
        status = "FAIL";
    }

    dash_line();
    std::cout << "Student Report\n";
    dash_line();
    std::cout << "Name: " << name << "\n\n";

    std::cout << "Scores\n";
    dash_line();
    print_grade("Homework", homework);
    print_grade("Midterm", midterm);
    print_grade("Final Exam", finalExam);
    std::cout << "\n";

    print_grade("Final Grade", finalGrade);
    std::cout <<std::left <<std::setw(20) << "Letter Grade" << ": " << letterGrade << "\n";
    std::cout <<std::left <<std::setw(20) << "Status" << ": " << status << "\n";
    dash_line();
}


