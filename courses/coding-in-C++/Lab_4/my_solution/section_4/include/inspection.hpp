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
    int overal_checks;
    int count_succsess_checks;
    bool passed_last_check;
public:
    Inspection(): overal_checks(0), count_succsess_checks(0), passed_last_check(false)
    {}; // Constructor
    ~Inspection() = default; // Destructor

    virtual std::string get_name() const = 0;
    virtual bool inspect(Product &product) = 0;
    virtual void report() const;
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

    /**
     * @brief Checks the weight is in range
     * 
     * @param[in]  product  Product to check
     * @return true is applicable, otherwise false
     */
    bool inspect(Product &product) override;


    /**
     *  @brief print report 
     */
    // void report() const override;
};


class VisualInspection : public Inspection
{
private:
public:
    VisualInspection()= default;
    ~VisualInspection()= default;

    std::string get_name() const override
    {
        return "Visual Inspection";
    }

    /**
     * @brief Checks is an visual defect
     * 
     * @param[in]  product  Product to check
     * @return true is applicable, otherwise false
     */
    bool inspect(Product &product) override;

    /**
     *  @brief print report 
     */
    // void report() const override;
};

class TemperatureTest : public Inspection
{
private:
    double max_temperature;
    double min_temperature;
public:
    TemperatureTest(double max_temperature, double min_temperature) : max_temperature(max_temperature),
                                                                    min_temperature(min_temperature)
    {};
    ~TemperatureTest() = default;

    std::string get_name() const override
    {
        return "Temperature Test";
    }

    /**
     * @brief Checks the temperature is in range
     * 
     * @param[in]  product  Product to check
     * @return true is applicable, otherwise false
     */
    bool inspect(Product &product) override;

    /**
     *  @brief print report 
     */
    // void report() const override;
};

#endif