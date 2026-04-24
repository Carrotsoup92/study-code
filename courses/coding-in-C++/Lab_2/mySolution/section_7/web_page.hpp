/*
* File: web_page.hpp
* Description: Shot discription of the file.
*/

#ifndef WEB_PAGE_H
#define WEB_PAGE_H

#include <string>

class WebPage {
private:
   std::string name;
   std::string content;
   int ranking;
public:
    WebPage():name(""),content(""), ranking(0) // Constructor
    {}  // Constructor
    ~WebPage() = default; // Destructor

    WebPage& set_name(std::string name);
    WebPage& set_content(std::string content);
    WebPage& set_ranking(int ranking);
    int get_ranking() const;
};

#endif