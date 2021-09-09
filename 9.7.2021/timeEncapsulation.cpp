#include <iostream>
#include <string>

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void setTime(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void setHour(int hour)
    {
        this->hour = hour;
    }

    void setMinute(int minute)
    {
        this->minute = minute;
    }

    void setSecond(int second)
    {
        this->second = second;
    }

    int getHour(void)
    {
        return hour;
    }

    int getMinute(void)
    {
        return minute;
    }

    int getSecond(void)
    {
        return second;
    }

    void nextSecond(void)
    {
        second += 1;
        if (second == 60)
        {
            second = 0;
            minute += 1;
        }

        if (minute == 60)
        {
            minute = 0;
            hour += 1;
        }

        if (hour == 24)
        {
            hour = 0;
        }
    }

    void previousSecond()
    {
        if (second == 0 && minute != 0)
        {
            second = 60;
            minute -= 1;
        }

        if (second == 0 && minute == 0 && hour != 0)
        {
            second = 60;
            minute = 60;
            hour -= 1;
            minute -= 1;
        }

        if (second == 0 && minute == 0 && hour == 0)
        {
            second = 60;
            minute = 60;
            hour = 24;
            hour -= 1;
            minute -= 1;
        }

        second -= 1;
    }

    void display(void)
    {
        std::string hour = std::to_string(this->hour);
        std::string minute = std::to_string(this->minute);
        std::string second = std::to_string(this->second);

        if (hour.length() == 1)
        {
            hour = "0" + hour;
        }

        if (minute.length() == 1)
        {
            minute = "0" + minute;
        }

        if (second.length() == 1)
        {
            second = "0" + second;
        }

        std::cout << hour + ":" + minute + ":" + second << std::endl;
    }
};

int main(void)
{
    Time time1(0, 0, 0);
    Time time2(7, 30, 58);
    Time time3(22, 0, 0);
    Time time4(10, 50, 59);
    time1.previousSecond();
    time1.display();
    time2.nextSecond();
    time2.display();
    time3.previousSecond();
    time3.display();
    time4.previousSecond();
    time4.display();
    return 0;
}