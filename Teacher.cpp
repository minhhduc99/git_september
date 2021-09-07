#include "Person.cpp"

class Teacher : public Person
{
private:
    int salary;
public:
    Teacher(std::string name, int age, std::string address, int salary) :\
    Person(name, age, address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
        this->salary = salary;
    }

    void setSalary(int salary)
    {
        this->salary = salary;
    }

    int getSalary(void)
    {
        return salary;
    }

    void display(void)
    {
        Person::display();
        std::cout << "Salary: " << salary << std::endl;
    }
};