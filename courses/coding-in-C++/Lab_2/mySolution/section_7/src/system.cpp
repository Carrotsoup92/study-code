/*
* File: system.cpp
* Description: Shot discription of the file.
*/

#include <iostream>

#include "system.hpp"
#include "web_page.hpp"

int System::total_queries = 0;

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
void System::add_query(void)
{
    total_queries += 1;
}

void System::print_statistics(void) const
{
    std::cout << WebPage::get_count_web_pages() << "\n";
    std::cout << total_queries << "\n";
}

void System::print_web_pages(std::vector<WebPage>& pages) const
{
    // return 1 if vector is empty
    if (pages.empty() == 1)
    {
        return;
    }

    int size = pages.size();

    std::cout << "All pages\n";

    for (int index = 0; index < size; index++)
    {
        WebPage page = pages.at(index);

        std::cout << "Page: " << index + 1 << "\n";
        std::cout << page.get_name() << "\n";
        std::cout << page.get_content() << "\n";
        std::cout << page.get_ranking() << "\n";
    }
}
