/*
* File: search_engine.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>
#include <vector>

#include "web_page.hpp"
#include "system.hpp"


int main() {
    
    std::vector<WebPage> pages {};

    WebPage page1;

    page1.set_name("apples")
         .set_content("apples are delicius")
         .set_ranking(1);

    pages.push_back(page1);
         
    return 0;
}