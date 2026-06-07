/*
* File: section_1.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

void const print_stats(int a, int b, double c, double d, std::string& e, std::string& f) 
{
    using namespace std;

    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n";
    cout << "d: " << d << "\n";
    cout << "e: " << e << "\n";
    cout << "f: " << f << "\n";
}

template <typename T>
void swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 1;
    int b = 5;

    double c = 1.0;
    double d = 5.0;

    std::string e = "HUHU";
    std::string f = "HOHO";

    print_stats(a,b,c,d,e,f);

    swap(a, b);
    swap(c, d);
    swap(e, f);

    print_stats(a,b,c,d,e,f);

    return 0;
}