#include <iostream>
#include <string>

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    int getDay(void)
    {
        return day;
    }

    int getMonth(void)
    {
        return month;
    }

    int getYear(void)
    {
        return year;
    }

    void display()
    {
        std::string day = std::to_string(this->day);
        std::string month = std::to_string(this->month);
        std::string year = std::to_string(this->year);

        if (day.length() == 1)
        {
            day = "0" + day;
        }

        if (month.length() == 1)
        {
            month = "0" + month;
        }

        std::cout << day + "/" + month + "/" + year << std::endl;
    }
};