
#include <string>
#include "memory"
#include "vector"


#include "driver.hpp"
#include "vehicle.hpp"



int Vehicle::id_count = 0;
int Driver::id_count = 0;


int main()
{
    // std::unique_ptr<Driver> driver_1 = std::make_unique<Driver>("Michael Schumacher");
    // auto driver_2 = std::make_unique<Driver>("Sebastian Vettle");
    
    std::vector<std::unique_ptr<Driver>> drivers;
    drivers.push_back(std::make_unique<Driver>("Michael Schumacher"));
    drivers.push_back(std::make_unique<Driver>("Sebastian Vettle"));

    drivers.at(0)->add_licens("B");
    drivers.at(1)->add_licens("BE");

    auto car_1 = std::make_shared<PKW>("VW", "B", 5.6);
    auto car_2 = std::make_shared<ElectricCar>("BMW", "BE", 9.6);

    std::vector<std::shared_ptr<Vehicle>> cars;
    cars.push_back(car_1);
    cars.push_back(car_2);
    
    for (auto& temp : cars)
    {
        temp->print_info();
    }

    drivers.at(0)->rent_car(car_1);
    drivers.at(1)->rent_car(car_2);

    for (auto& temp : cars)
    {
        temp->print_info();
    }

    std::shared_ptr<Vehicle> p_basisklassenzeiger[] = {car_1, car_2};

    
}



