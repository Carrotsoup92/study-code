/*
* File: pipline.cpp
* Description: Short discription of the file.
*/


#include "../include/pipline.hpp"


void Pipline::add_inspection(Inspection *inspection)
{
    this->inspetions.push_back(inspection);
}

void Pipline::inspect(const Product &procuct)
{
    for (Inspection *temp : inspetions)
    {
        temp->inspect(procuct);
    }
}