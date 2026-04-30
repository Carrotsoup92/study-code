/*
* File: search_engine.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>
#include <vector>

#include "web_page.hpp"
#include "system.hpp"
#include "query.hpp"


std::vector<WebPage> create_content()
{
    std::vector<WebPage> pages {};

    WebPage page1 = WebPage::create_web_page("Apples", "Apples grows on a trees.", 3);
    pages.push_back(page1);


    WebPage page2 = WebPage::create_web_page("Apples", "Apples are good.", 1);
    pages.push_back(page2);


    WebPage page3 = WebPage::create_web_page("Trees", "Many trees are a forest.", 1);
    pages.push_back(page3);


    WebPage page4 = WebPage::create_web_page("People", "People like apple.", 2);
    pages.push_back(page4);


    WebPage page5 = WebPage::create_web_page("Space", "Poeple want live at mars.", 3);
    pages.push_back(page5);

    return pages;
}

int main() 
{
    std::vector<WebPage> pages = create_content();

    System system;
    Query query;

    system.print_statistics();
    // system.print_web_pages(pages);

    std::vector<WebPage> results = query.find_match(pages, "apple");

    query.sort_results(results);
    query.print_results(results);
    
     
    return 0;
}