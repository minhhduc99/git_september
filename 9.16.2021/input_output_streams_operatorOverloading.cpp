#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date() {

    }
    Date(int day, int month, int year)
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

    void standardized()
    {
        if (day < 1)
        {
            day = 1;
        }

        if (year < 0)
        {
            year = 0;
        }

        switch (month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (day > 31)
                {
                    day = 31;
                }
                break;
            case 2:
                if (day > 28)
                {
                    day = 28;
                }
                break;
            case 4: case 6: case 9: case 11:
                if (day > 30)
                {
                    day = 30;
                }
                break;
            default:
                month = 12;
                break;
        }
    }

    friend std::ostream& operator<< (std::ostream& os, Date& d)
    {
        os << d.day << "/";
        os << d.month << "/";
        os << d.year << std::endl;

        return os;
    }

    friend std::istream& operator>> (std::istream& is, Date& d)
    {
        is >> d.day;
        is >> d.month;
        is >> d.year;
        return is;
    }
};

int main(void)
{
    Date date1{16, 9, 2021};
    std::cout << date1;

    Date date2;
    std::cin >> date2;
    std::cout << date2;
    return 0;
}