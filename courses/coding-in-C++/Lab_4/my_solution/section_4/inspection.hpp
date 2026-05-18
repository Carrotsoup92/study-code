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
    void set_name(std::string name)
    {
        this->name = name;
    }
public:
    Inspection();  // Constructor
    virtual~Inspection() = default; // Destructor

    virtual void print_report() const = 0;
    std::string get_name() const
    {
        return this->name;
    }
};


class WeightCheck : public Inspection
{
private:
    int max_weight;
    int min_weight;
public:
    WeightCheck(int max_weight, int min_weight): max_weight(max_weight), min_weight(min_weight) 
    {
        set_name("Weight_check");
    };
    ~WeightCheck() = default;

    void print_report() const override;
};


class VisualInspection :public Inspection
{
private:
    /* data */
public:
    VisualInspection(/* args */);
    ~VisualInspection();
};

class TemperatureTest :public Inspection
{
private:
    /* data */
public:
    TemperatureTest(/* args */);
    ~TemperatureTest();
};



#endif