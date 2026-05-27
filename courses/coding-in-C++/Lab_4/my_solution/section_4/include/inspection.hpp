/*
* File: inspection.hpp
* Description: Short discription of the file.
*/

#ifndef INSPECTION_HPP
#define INSPECTION_HPP

#include <iostream>
#include <string>

class Product;

class Inspection
{
private:
protected:
public:
    Inspection() = default;  // Constructor
    ~Inspection() = default; // Destructor

    virtual std::string get_name() const = 0;
    virtual bool inspect( const Product &product) const = 0;
};


class WeightCheck : public Inspection
{
private:
    double min_weight;
    double max_weight;
public:
    WeightCheck(double min_weight, double max_weight) : min_weight(min_weight),
                                                        max_weight(max_weight)
    {};
    ~WeightCheck() = default;

    std::string get_name() const override
    {
        return "Weight Check";
    }

    bool inspect(const Product &product) const override;
};


class VisualInspection : public Inspection
{
private:
    /* data */
public:
    VisualInspection(/* args */)= default;
    ~VisualInspection()= default;
};

class TemperatureTest : public Inspection
{
private:
    /* data */
public:
    TemperatureTest(/* args */)= default;
    ~TemperatureTest() = default;
};



#endif