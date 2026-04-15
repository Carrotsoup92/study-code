/*
 * File: input_data.hpp
 * Description: header file for input_data.cpp
 */

void read_student_data(std::string& name, double& homework, 
                        double& midterm, double& finalExam);

void calculateGrade(const double& homework, const double& midterm, const double& finalExam, 
                    double& finalGrade, std::string& letterGrade);

void printReport(const std::string& name, const double& homework, 
                const double& midterm, const double& finalExam, 
                const double& finalGrade, const std::string& letterGrade);
