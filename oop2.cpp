#include <iostream>

class Student
{
private:
    int id;
    int age;
    std::string name;
    std::string address;
    int score;
public:
    Student()
    {
        //code
    }

    Student(int id, std::string name, int age, std::string address, int score)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->setScore(score);
    }

    void setId(int id)
    {
        this->id = id;
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

    void setScore(int score)
    {
        if (score < 0)
        {
            this->score = 0;
        }
        else if (score > 10)
        {
            this->score = 10;
        }
        else
        {
            this->score = score;
        }
    }

    int getId(void)
    {
        return id;
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

    int getScore(void)
    {
        return score;
    }
};