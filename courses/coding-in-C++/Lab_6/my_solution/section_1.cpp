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
    const int FILE_MIN_SIZE = 4;
public:
    ConfigLoader(/* args */) = default;
    ~ConfigLoader() = default;

    void load(std::string filename)
    {

        if(filename.size() <= FILE_MIN_SIZE )
        {
            throw std::runtime_error("missing filename");
        }

        size_t size = filename.length();
        std::string extension = filename.substr(size - static_cast<size_t>(FILE_MIN_SIZE), FILE_MIN_SIZE);

        if(extension != ".cfg")
        {
            throw std::invalid_argument("wrong extenstion");
        }

        std::cout << filename << "\n";
    }
};


int main() {
    
    ConfigLoader config;

    try
    {
        config.load("");
    }
    catch(const std::runtime_error& error)
    {
        std::cout << error.what() << "\n";
    }

    try
    {
        config.load("huhu.fds");
    }
    catch(const std::invalid_argument& error)
    {
        std::cout << error.what() << "\n";
    }
    
    catch(const std::exception& error)
    {
        std::cout << "Other error\n";
    }

    return 0;
}