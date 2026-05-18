/*
* File: section_1.cpp
* Description: Short discription of the file.
*/

#include <iostream>
#include <string>
#include <stdexcept>

class ConfigLoader
{
private:
    /* data */
public:
    ConfigLoader(/* args */);
    ~ConfigLoader();

    void load(std::string filename)
    {
        if(filename.empty())
        {
            throw std::runtime_error("missing filename");
        }
    }
};


int main() {
    
    ConfigLoader config;

    try
    {
        config.load("");
    }
    catch(const std::exception& error)
    {
        std::cout << error.what();
    }
    catch(const std::exception error){};

    return 0
}