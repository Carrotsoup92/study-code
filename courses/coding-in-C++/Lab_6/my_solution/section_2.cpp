
#include <iostream>
#include <string>
#include <stdexcept>

class Sensor
{
private:
    std::string name;
    double value;
    const double MIN_VALUE;
    const double MAX_VALUE;
public:
    Sensor(std::string name, double value, double min_value, double max_value): 
            name(name), value(value), MIN_VALUE(min_value), MAX_VALUE(max_value)
            {};
    ~Sensor() = default;

    void update_value(double value)
    {
        this->value = value;
    }

    double get_value()
    {
        return this->value;
    }

    void print_info();

    void check_range()
    {
        if ((this->value < this->MIN_VALUE) || (this->value > this->MAX_VALUE))
        {
            throw std::invalid_argument("Value out of range\n");
        }
    }

};

int main()
{
    Sensor temp = Sensor("Temperatur Sensor", -300.0, -237.15, 9999.0);
    Sensor hum = Sensor("Humidity Sensor", 132.0, 0.0, 100.0);

    try
    {
        temp.check_range();
    }
    catch(const std::invalid_argument& e)
    {
        std::cout << e.what();
    }

    catch(const std::exception& error)
    {
        std::cout << "Unkonwn error.\n";
    }
    
    return 0;
}