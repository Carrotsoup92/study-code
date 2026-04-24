/*
* File: web_page.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

#include "web_page.hpp"

/**
* @brief Calculates the average temperature.
*
* Returns the arithmetic mean of all valid sensor values.
* Invalid sensor values are ignored.
 *
 * @param[in] values       Array of sensor values
 * @param[in,out] value_count  Number of elements in values
 * @return                 Average of valid values
 */
WebPage& WebPage::set_name(std::string name)
{
    this->name = name;
    return *this;
}

WebPage& WebPage::set_content(std::string content)
{
    this->content = content;
    return *this;
}

WebPage& WebPage::set_ranking(int ranking)
{
    this->ranking = ranking;
    return *this;
}

int WebPage::get_ranking(void) const
{
    return ranking;
}