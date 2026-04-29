/*
* File: search_engine.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>
#include <vector>

#include "web_page.hpp"
#include "system.hpp"


std::vector<WebPage> create_content()
{
    std::vector<WebPage> pages {};

    WebPage page1;
    page1.crate_web_page("Apples", "Apples grow on a tree", 3);
    pages.push_back(page1);

    WebPage page2;
    page2.crate_web_page("Apples", "Apples are good", 1);
    pages.push_back(page2);

    return pages;
}

int main() {
    
    std::vector<WebPage> pages = create_content();

    System system;

    system.print_web_pages(pages);

    
         
    return 0;
}