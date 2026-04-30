/*
* File: query.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "query.hpp"
#include "web_page.hpp"


// Helper function to convert a string to lowercase
static std::string to_lower(std::string str)
{
    // std::transform applies a function (::tolower) to each character
    // and writes the result back into the same string
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}


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
std::vector<WebPage> Query::find_match(const std::vector<WebPage>& pages, const std::string& query)
{
    // This vector will store all matching WebPage objects
    std::vector<WebPage> results;

    // Convert the search query to lowercase once
    // so we can perform case-insensitive comparisons
    std::string query_lower = to_lower(query);

    // Loop over each WebPage in the input vector
    // & = we do NOT copy the object (efficient)
    // const = we do NOT modify the object (read-only access)
    for (const WebPage& page : pages)
    {
        // Convert the page content to lowercase
        std::string content_lower = to_lower(page.get_content());

        // Get the content (text) of the current page
        // and search for the query string inside it
        //
        // std::string::find() returns:
        // - the position (0, 1, 2, ...) if the substring is found
        // - std::string::npos if the substring is NOT found
        if (content_lower.find(query_lower) != std::string::npos)
        {
            // If the query string is found in the page content,
            // we add this page to the results vector
            // This creates a COPY of the WebPage object
            // and stores it inside "results"
            results.push_back(page);
        }
    }

    // Return all matching pages
    return results;
}

void Query::sort_results(std::vector<WebPage>& results)
{
    // Sort the results vector
    // - results.begin() → iterator to the first element
    // - results.end()   → iterator to one past the last element
    // - the lambda defines the comparison rule
    std::sort(results.begin(), results.end(),
        [](const WebPage& a, const WebPage& b)
        {
            // This comparison function determines the order
            // It returns true if 'a' should come BEFORE 'b'

            // Here: sort by ranking in descending order
            // (higher ranking = better → comes first)
            return a.get_ranking() > b.get_ranking();
        });
}

void Query::print_results(std::vector<WebPage>& results) const
{
    std::cout << "All results:\n";

    for (const WebPage& temp : results)
    {
        std::cout << temp.get_content() << "\n";

    }
}
