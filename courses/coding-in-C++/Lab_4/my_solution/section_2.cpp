/*
* File: section_2.cpp
* Description: Shot discription of the file.
*/

#include <iostream>
#include <string>

class Base
{
private:
public:
    Base() = default;
    virtual ~Base() = default;

    virtual double area() const =0;
    // {
    //     return 0.0;
    // }
    // Ja weil du unterklassen die funktion überschreiben müssen
    // virtual destructor 
};


class Circle : public Base
{
private:
    double r;
public:
    Circle(double r): r(r)
    {};
    ~Circle()= default;

    double area() const override
    {
        return r * r * 3.14;
    }

};

class Rectangle : public Base
{
private:
    double a; 
    double b;
public:
    Rectangle(double a, double b): a(a), b(b)
    {};
    ~Rectangle() = default;

    double area() const override
    {
        return a * b;
    }
};

int main() {
    
    Circle circle(3.0);
    Rectangle rectangle(3.0, 3.0);

    std::cout << circle.area() << "\n";
    std::cout << rectangle.area() << "\n";

    Base *array[4] = {new Circle(8),
                    new Circle(5), 
                    new Rectangle(4,4), 
                    new Rectangle(5,5)};

    for (int index = 0; index < 4; index++)
    {
        std::cout << array[index]->area() << "\n";
    }

    return 0;
}