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
    WeightCheck(): max_weight(0), min_weight(0) 
    {
        set_name("Weight_check");
    };
    ~WeightCheck() = default;

    void print_report() const override;

    bool check_weight() const;
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