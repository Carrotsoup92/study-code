/*
* File: system.hpp
* Description: Shot discription of the file.
*/

#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>

class System {
private:
   int total_queries;
public:
    System():total_queries(0) // Constructor
    {}
    ~System() = default; // Destructor

    void add_query(void);
    void print_statistics(void) const;
};

#endif