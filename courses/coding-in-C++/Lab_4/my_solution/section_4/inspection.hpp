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
    std::string type;
    bool succes_last_inspection;
    static int total_succes_rate;
protected:
    int placeholder;
    void set_type(std::string type)
    {
        this->type = type;
    }
public:
    Inspection();  // Constructor
    virtual~Inspection() = default; // Destructor

    virtual void print_report() const = 0;

    std::string get_type() const
    {
        return this->type;
    }
};


class WeightCheck : public Inspection
{
private:
    double max_weight;
    double min_weight;
public:
    WeightCheck(): max_weight(0), min_weight(0) 
    {
        set_type("Weight_check");
    };
    ~WeightCheck() = default;

    void print_report() const override;

    bool check_weight() const;
};


class VisualInspection :public Inspection
{
private:
    
public:
    VisualInspection()
    {
        set_type("Visual_inspectition");
    };
    ~VisualInspection() = default;

    void print_report() const override;

    bool check_visual() const;
};

class TemperatureTest :public Inspection
{
private:
    double max_temperature;
    double min_temperature;
public:
    TemperatureTest()
    {
        set_type("Temperatuere_test");
    };
    ~TemperatureTest() = default;

    void print_report() const override;

    bool check_temperature() const;
};



#endif