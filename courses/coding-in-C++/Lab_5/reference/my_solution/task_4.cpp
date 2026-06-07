/**
 * @file tast_4.cpp
 * @brief Weakest signal detector
 */

#include <iostream>
#include <string>

template <typename T, typename N>
void print_pair(const std::string& label_1, const T& value_1, const std::string& Label_2,const  N& value_2)
{
      std::cout << label_1 << ": " << value_1 << " | " << Label_2 << ": " << value_2 << "\n";
}

int main()
{
    print_pair("Motor", "ESD", "Test", 9);
}