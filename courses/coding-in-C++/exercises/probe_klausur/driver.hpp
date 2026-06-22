

#include <string>
#include <vector>
#include <memory>

#include "vehicle.hpp"

class Driver
{
private:
    static int id_count;
    int id;
    std::string name;
    std::vector<std::string> licences;
    Vehicle* vehicle;

public:
    Driver(std::string name)
    {
        this->id = id_count;
        this->name = name;
        this->vehicle = nullptr;

        this->id_count++;
    };

    std::string  get_name() const
    {
        return this->name;
    }

    void add_licens(std::string& license);

    void remove_licence(std::string& licnese);

    void rent_car(Vehicle& vehicle);
};