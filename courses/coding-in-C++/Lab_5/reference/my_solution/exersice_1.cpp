/*
* File: FILE.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

template <typename T, typename U>
class pair
{
private:
    T value_1;
    U value_2;
public:
    pair(T value_1, U value_2): value_1(value_1), value_2(value_2)
    {};
    ~pair() = default;

    T get_T() const
    {
        return this->value_1;
    }

    U get_U() const
    {
        return this->value_2;
    }

    void set_T(T value)
    {
        this->value_1 = value;
    } 

    void set_U(U value)
    {
        this->value_2 = value;
    }
};


int main() {
    pair test(3, 3.3);
    pair test_2("HUHU", 7);

    std::cout << test.get_T();
    std::cout << test_2.get_T();

    return 0;
}