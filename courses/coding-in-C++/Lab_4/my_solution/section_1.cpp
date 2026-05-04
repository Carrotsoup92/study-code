
#include <iostream>
#include <cmath>

class Vector2D
{
private:
    double x;
    double y;
public:
    Vector2D() = default;
    Vector2D(double x, double y): x(x), y(y)
    {}
    ~Vector2D() = default;

    double get_x() const
    {
        return this->x;
    }

    double get_y() const
    {
        return this->y;
    }

    void print_vec() const
    {
        std::cout << "x: " << this->get_x() << "\n";
        std::cout << "y: " << this->get_y() << "\n";
    }

    double get_length() const
    {
        return sqrt(this->get_x() * this->get_x() + this->get_y() * this->get_y());
    }

    double get_length(int percision)
    {
        double factor = std::pow(10.0 , percision);
        double length = get_length();
        return std::round(length * factor) / factor;
    }
};

Vector2D = ;
int main()
{
    Vector2D vector(4, 4);

    vector.get_x();
    vector.get_y();
    vector.print_vec();

    double length = vector.get_length();
    std::cout << "length: " << length << "\n";

    double length_1 = vector.get_length(3);
    std::cout << "length: " << length_1 << "\n";
}
