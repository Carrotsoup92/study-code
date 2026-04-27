
#include <iostream>
#include <string>

class User
{
protected:
    std::string name;
    int id;
public:
    User(std::string name, int id): name(name), id(id)
    {
        std::cout << "Constructor of User.\n";
    }
    ~User() = default;

    void print_info()
    {
        std::cout << name << id << "\n";
    }
};

class Student : public User
{
private:
    std::string course;
public:
    Student(std::string name, int id, std::string course): User(name, id), course(course)
    {};

    void print_role()
    {
        print_info();
        std::cout << name << id << course << "\n";
    }
};

class Instructor : public User
{
private:
    std::string position;
public:
    Instructor(std::string name, int id, std::string position): User(name, id), position(position)
    {};

    void print_role()
    {
        std::cout << name << id << position << "\n";
    }
};

int main()
{
    Student student("Müller", 001, "Programming");
    Instructor instructor("Schmid", 002, "Chief");

    Student::print_info;
    Student::print_role;

    Instructor::print_info;
    Instructor::print_role;

}