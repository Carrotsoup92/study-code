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

class System;

class Query {
private:
    std::string query;
    int number_results;
    int count_results;

public:
    Query(): query(""), number_results(0), count_results(0)
    {};  // Constructor
    ~Query() = default; // Destructor

    void get_input(System& system);
    std::vector<WebPage> find_match(const std::vector<WebPage>& pages);
    void sort_results(std::vector<WebPage>& results);
    void print_results(std::vector<WebPage>& results);

    int get_count_results() const;
    
};

#endif