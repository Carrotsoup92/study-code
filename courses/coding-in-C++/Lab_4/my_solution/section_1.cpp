
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

    void operator+=(const Vector2D& vec_2)
    {
        this->x = this->get_x() + vec_2.get_x();
        this->y = this->get_y() + vec_2.get_y();
    }

    Vector2D operator*(double multiplicant)
    {
        return Vector2D(this->get_x() * multiplicant, this->get_y() * multiplicant);
    }
};

Vector2D operator+(const Vector2D& vec_1, const Vector2D& vec_2)
{
    return Vector2D(vec_1.get_x() + vec_2.get_x(), vec_1.get_y() + vec_2.get_y());
};

Vector2D operator*(double multiplicant, const Vector2D& vec_2)
{
    return Vector2D(multiplicant * vec_2.get_x(), multiplicant * vec_2.get_y());
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vec)
{
    os << "x: " << vec.get_x() << "\n"
       << "y: " << vec.get_y() << "\n";
    return os;
}

bool vector_equal(const Vector2D& vec_1, const Vector2D& vec_2) 
{
    double factor = std::pow(10.0, 3);
    double vec_1_x = std::round(vec_1.get_x ()*factor) / factor;
    double vec_2_x = std::round(vec_2.get_x ()*factor) / factor;
    double vec_1_y = std::round(vec_1.get_y ()*factor) / factor;
    double vec_2_y = std::round(vec_2.get_y ()*factor) / factor;

    return (vec_1_x == vec_2_x) && (vec_1_y == vec_2_y);
}

bool vector_inequal(const Vector2D& vec_1, const Vector2D& vec_2) 
{
    return (!(vec_1.get_x() == vec_2.get_x()) && (vec_2.get_y() == vec_2.get_y()));
}

int main()
{
    Vector2D vector(4, 4);

    vector.print_vec();

    double length = vector.get_length();
    std::cout << "length: " << length << "\n";

    double length_1 = vector.get_length(3);
    std::cout << "length: " << length_1 << "\n";

    Vector2D vector_2(5, 5);

    Vector2D vector_3 = vector + vector_2;
    vector_3.print_vec();

    vector_3 = vector_3 * 4;
    vector_3.print_vec();

    vector += vector_2;
    vector.print_vec();

    vector_2 = 2.5 * vector_2;
    vector_2.print_vec();

    std::cout << vector << vector_2;

    Vector2D vector_4(5.2222236, 5);
    Vector2D vector_5(5.2222234, 5);

    if (vector_equal(vector_4, vector_5))
    {
        std::cout << "Vector equal!\n";
    }

    if (vector_inequal(vector, vector_2))
    {
        std::cout << "Vector inequal!\n";
    }
}
