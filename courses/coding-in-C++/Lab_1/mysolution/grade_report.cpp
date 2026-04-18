/*
 * File: grade_report.cpp
 * Description: kreate a grade report for students
 */

#include <iostream>
#include <cstdint>

#include "input_data.hpp"


int main()
{
    std::string name;
    std::string letterGrade;
    double homework = 0;
    double midterm = 0;
    double finalExam = 0;
    double finalGrade = 0;

    read_student_data(name, homework, midterm, finalExam);

    calculateGrade(homework, midterm, finalExam, finalGrade, letterGrade);

    printReport(name, homework, midterm, finalExam, finalGrade, letterGrade);

    return 0;
}