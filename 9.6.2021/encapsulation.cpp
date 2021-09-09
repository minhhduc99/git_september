#include <iostream>

class Person
{
private:
    int ID_number;
    int age;
    std::string name;
    std::string address;
public:
    Person(int, std::string, int, std::string);
    int getID(void);
    int getAge(void);
    std::string getName(void);
    std::string getAddress(void);
    void displayInfo(void);
};

Person::Person(int ID_number, std::string name, int age, std::string address)
{
    this->ID_number = ID_number;
    this->name = name;
    this->age = age;
    this->address = address;
}

int Person::getID(void)
{
    return ID_number;
}

int Person::getAge(void)
{
    return age;
}

std::string Person::getName(void)
{
    return name;
}

std::string Person::getAddress(void)
{
    return address;
}

void Person::displayInfo(void)
{
    std::cout << "Id: " << getID() << std::endl;
    std::cout << "Name: " + getName() << std::endl;
    std::cout << "Age: " << getAge() << std::endl;
    std::cout << "Address: " + getAddress() << std::endl;
}

int main(void)
{
    Person first_person(1001, "Quynh", 24, "Ha Noi");

    first_person.displayInfo();
    return 0;
}