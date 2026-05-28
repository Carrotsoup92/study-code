/*
* File: pipline.hpp
* Description: Short discription of the file.
*/

#ifndef PIPLINE_HPP
#define PIPLINE_HPP

#include <vector>

#include "inspection.hpp"


/**
 * @brief Pipline to store all inspections
 */
class Pipline
{
private:
    std::vector<Inspection*> inspetions;
protected:
public:
    Pipline() = default;  // Constructor
    ~Pipline() = default; // Destructor


    /**
     * @brief add inspection in pipline
     * 
     * @param[in] inspection    Inspection to add the pipline
     */
    void add_inspection(Inspection *inspection);

    /**
     * @brief run all inspection on a product
     * 
     * @param[in]   product     Product to run inspections
     */
    void inspect(const Product &product);
};

#endif