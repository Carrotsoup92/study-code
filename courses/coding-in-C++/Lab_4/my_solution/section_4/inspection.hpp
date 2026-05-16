/*
* File: inspection.hpp
* Description: Short discription of the file.
*/

#ifndef INSPECTION_HPP
#define INSPECTION_HPP

#include <iostream>
#include <string>

class Inspection
{
private:
    std::string name;
protected:
    int placeholder;
public:
    Inspection();  // Constructor
    ~Inspection() = default; // Destructor
};


class WeightCheck
{
private:
    /* data */
public:
    WeightCheck(/* args */);
    ~WeightCheck();
};


class VisualInspection
{
private:
    /* data */
public:
    VisualInspection(/* args */);
    ~VisualInspection();
};

class TemperatureTest
{
private:
    /* data */
public:
    TemperatureTest(/* args */);
    ~TemperatureTest();
};



#endif