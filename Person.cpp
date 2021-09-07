#pragma once
/* Co the thay #pragma once = 
	#ifndef _PERSON_CPP
	#define _PERSON_CPP
	...
	#endif
*/
#include <iostream>

class Person
{
private:
    std::string name;
    std::string address;
    int age;
public:
    Person(std::string name, int age, std::string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setAddress(std::string address)
    {
        this->address = address;
    }

    std::string getName(void)
    {
        return name;
    }

    int getAge(void)
    {
        return age;
    }

    std::string getAddress(void)
    {
        return address;
    }

    void display()
    {
        std::cout << "Name: " + name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Address: " + address << std::endl;
    }
};