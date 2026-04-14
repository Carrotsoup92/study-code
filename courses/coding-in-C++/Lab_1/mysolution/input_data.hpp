/*
 * File: input_data.hpp
 * Description: header file for input_data.cpp
 */

void read_student_data(std::string& name, double& homework, double& midterm, double& finalExam);

void calculateGrade(double& homework, double& midterm, double& finalExam, double& finalGrade, std::string& letterGrade);

void printReport(std::string& name, double& homework, double& midterm, double& finalExam, double& finalGrade, std::string& letterGrade);
