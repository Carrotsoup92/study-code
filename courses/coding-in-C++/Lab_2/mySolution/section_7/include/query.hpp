/*
* File: query.hpp
* Description: Shot discription of the file.
*/

#ifndef QUERY_H
#define QUERY_H

#include <iostream>
#include <string>
#include <vector>

#include "web_page.hpp"

class Query {
private:
   int count_results;

public:
    Query();  // Constructor
    ~Query(); // Destructor

    std::vector<WebPage> find_match(const std::vector<WebPage>& pages, const std::string& query);
    void sort_results(std::vector<WebPage>& results);
    void print_results(std::vector<WebPage>& results) const;
};

#endif