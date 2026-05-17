/*
* File: product.hpp
* Description: Shot discription of the file.
*/

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string>

#include "inspection.hpp"

class Product
{
private:
    int id;
    std::string name;
    double weight;
    double temperature;
    bool visual_defect_status;
protected:
    WeightCheck *weight_check;
    TemperatureTest *temperature_test;
    VisualInspection *visual_inspection;
public:
    Product(int id, std::string name, double weight, double temperature, bool visual_defect_status): 
            id(id), name(name), weight(weight), temperature(temperature), visual_defect_status(visual_defect_status)
            {
                weight_check = new WeightCheck();
                temperature_test = new TemperatureTest();
                visual_inspection= new VisualInspection();
            };  // Constructor
    virtual ~Product()
    {
        delete weight_check;
        delete temperature_test;
        delete visual_inspection;
    }; // Destructor

    double get_weight() const
    {
        return this->weight;
    }

    double get_temperature() const
    {
        return this->temperature;
    }

    bool get_visual_defect_status() const
    {
        return this->visual_defect_status;
    }

    virtual void report() const;
};


class CombustionEngine : public Product
{
private:
    /* data */
public:
    CombustionEngine(int id, std::string name, double weight, double temperature, bool visual_defect_status):
                     Product(id, name, weight, temperature, visual_defect_status)
                     {};
    ~CombustionEngine() = default;

    void report() const override;

};


class ElectricEngine : public Product
{
private:
    double voltage;
public:
    ElectricEngine(int id, std::string name, double weight, double temperature, bool visual_defect_status, double voltage):
                    Product(id, name, weight, temperature, visual_defect_status), voltage(voltage)
                    {};
    ~ElectricEngine() = default;

    double get_voltage() const
    {
        return this->voltage;
    }

    void report() const override;
};


#endif