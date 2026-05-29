/*
* File: product.hpp
* Description: Shot discription of the file.
*/

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string>

/**
 * Class to define products
 */
class Product
{
private:
    int id;
    double weight;
    double temperature;
    bool visual_defect_status;
    std::string name;
protected:
    bool pass_weight_check;
    bool pass_temperature_test;
    bool pass_visual_inspection;
public:
    Product(int id, double weight, double temperature, bool visual_defect_status): 
            id(id), weight(weight), temperature(temperature),
            visual_defect_status(visual_defect_status)
            {};  // Constructor
    virtual ~Product() = default; // Destructor

    double get_id() const
    {
        return this->id;
    }

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

    /**
     * @brief Set status of weight check passt
     * 
     * @param[in] passed flag whether weight check passed  
     */
    void set_pass_weight_check(bool passed)
    {
        this->pass_weight_check = passed;
    }

    /**
     * @brief Set status of Visual Inspection
     * 
     * @param[in] passed flag whether visual inspecton passed  
     */
    void set_pass_visual_inspection(bool passed)
    {
        this->pass_visual_inspection = passed;
    }

    /**
     * @brief Set status of temperature test passt
     * 
     * @param[in] passed flag whether temperature passed  
     */
    void set_pass_temperature_test(bool passed)
    {
        this->pass_temperature_test = passed;
    }

    virtual std::string get_name() const = 0;

    virtual void report() const = 0;
};


class CombustionEngine : public Product
{
private:
    
public:
    CombustionEngine(int id, double weight, double temperature, bool visual_defect_status):
                     Product(id, weight, temperature, visual_defect_status)
                     {};
    ~CombustionEngine() = default;

    std::string get_name() const override
    {
        return "Combustion Engine";
    }


};


class ElectricEngine : public Product
{
private:
    double voltage;
public:
    ElectricEngine(int id, double weight, double temperature, bool visual_defect_status, double voltage):
                    Product(id, weight, temperature, visual_defect_status), voltage(voltage)
                    {};
    ~ElectricEngine() = default;

    double get_voltage() const
    {
        return this->voltage;
    }

    std::string get_name() const override
    {
        return "Electric Engine";
    }

    void report() const override;
};


#endif