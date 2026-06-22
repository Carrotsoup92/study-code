

#include <string>

class Vehicle
{
private:
    static int id_count;
    int id;
    std::string brand;
    bool aviable;
    std::string needed_licence;
    std::string assingned_driver;

public:
    Vehicle(std::string& brand, std::string& needed_licence)
    {
        this->id = this->id_count;
        this->brand = brand;
        this->aviable = false;
        this->needed_licence = needed_licence;
        this->assingned_driver = "NONE";

        this->id_count++;
    }
    virtual ~Vehicle() = default;

    virtual void print_info() const = 0;

    std::string get_brand() const
    {
        return this->brand;
    }

    bool get_aviable() const
    {
        return this->aviable;
    }

    void set_aviable(bool aviable)
    {
        this->aviable = aviable;
    }

    std::string get_needed_license() const
    {
        return this->needed_licence;
    }

    std::string get_assigned_driver() const
    {
        return this->assingned_driver;
    }
};

class PKW : public Vehicle
{
private:
    double comsunption;

public:
    PKW(std::string& brand, std::string& needed_licence, double consumption): Vehicle(brand, needed_licence)
    {
        this->comsunption = consumption;
    }
    
    void print_info() const override;

    std::string get_type() const
    {
        return "PKW";
    }

    double get_consumtion() const
    {
        return this->comsunption;
    }
};


class ElectricCar : public Vehicle
{
private: 
    double battery_capacity;

public:
    ElectricCar(std::string& brand, std::string& needed_licence, double battery_capacity): Vehicle(brand, needed_licence)
    {
        this->battery_capacity = battery_capacity;
    }
    
    void print_info() const override;

    std::string get_type() const
    {
        return "Electric Cat";
    }

    double get_battery_capacity() const
    {
        return this->battery_capacity;
    }
};




