/*
* File: web_page.hpp
* Description: Shot discription of the file.
*/

#ifndef WEB_PAGE_H
#define WEB_PAGE_H

#include <iostream>
#include <string>
#include <vector>

class WebPage {
private:
   std::string name;
   std::string content;
   int ranking;
   static int count_web_pages;

public:
    WebPage():name(""),content(""), ranking(0) // Constructor
    {
        count_web_pages++;
        // std::cout << "Constructor\n" << count_web_pages << "\n";  
    }
    ~WebPage() = default; // Destructor

    WebPage& set_name(std::string name);
    WebPage& set_content(std::string content);
    WebPage& set_ranking(int ranking);

    std::string get_name() const;
    std::string get_content() const;
    int get_ranking() const;

    static int get_count_web_pages();
    static WebPage create_web_page(std::string name, std::string content, int ranking);
};

#endif