#include "Person.cpp"

class Student : public Person
{
private:
    double gpa;
public:
    Student(std::string name, int age, std::string address, double gpa) :\
    Person(name, age, address)
    {
        this->gpa = gpa;
    }

    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }

    double getGpa(void)
    {
        return gpa;
    }

    void display()
    {
        Person::display();
        std::cout << "GPA: " << gpa << std::endl;
    }
};