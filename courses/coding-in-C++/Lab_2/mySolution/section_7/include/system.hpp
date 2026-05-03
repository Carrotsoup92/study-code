/*
* File: system.hpp
* Description: Shot discription of the file.
*/

#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <string>
#include <vector>

#include "web_page.hpp"
#include "query.hpp"

class System {
private:
   static int total_queries;
   
public:
    System() = default; // Constructor
    ~System() = default; // Destructor

    void add_query(void);
    void print_statistics(Query query) const;
    void print_web_pages(std::vector<WebPage>& pages) const;
};

#endif