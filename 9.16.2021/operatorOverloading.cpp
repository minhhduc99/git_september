#include <iostream>
#include <vector>

class Fraction
{
private:
    int x;
    int y;
public:
    Fraction(){

    }
    Fraction(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getX(void)
    {
        return x;
    }

    int getY(void)
    {
        return y;
    }

    friend Fraction operator+ (Fraction& a, Fraction& b)
    {
        int x_value = a.x * b.y + a.y * b.x;
        int y_value = a.y * b.y;
        return Fraction(x_value, y_value);
    }
    friend Fraction operator- (Fraction& a, Fraction& b)
    {
        int x_value = a.x * b.y - a.y * b.x;
        int y_value = a.y * b.y;
        return Fraction(x_value, y_value);
    }
    friend Fraction operator* (Fraction& a, Fraction& b)
    {
        int x_value = a.x * b.x;
        int y_value = a.y * b.y;
        return Fraction(x_value, y_value);
    }
    friend Fraction operator/ (Fraction& a, Fraction& b)
    {
        int x_value = a.x * b.y;
        int y_value = a.y * b.x;
        return Fraction(x_value, y_value);
    }

    friend bool operator== (Fraction& a, Fraction& b)
    {
        if (a.x == b.x && a.y == b.y)
        {
            return true;
        }

        return false;
    }

    void reduce(void)
    {
        if (x < y)
        {
            int temp = x;
            if (temp < 0)
            {
                temp = -temp;
            }
            for (int value = temp; value >= 2; value--)
            {
                if (x % value == 0 && y % value == 0)
                {
                    x /= value;
                    y /= value;
                    break;
                }
            }
        }

        else if (x > y)
        {
            for (int value = y; value >= 2; value--)
            {
                if (x % value == 0 && y % value == 0)
                {
                    x /= value;
                    y /= value;
                    break;
                }
            }
        }

        else
        {
            x = 1;
            y = 1;
        }
    }

    void display(void)
    {
        std::cout << x << "/" << y << std::endl;
    }
};


int main(void)
{
    Fraction frac1{1, 2};
    Fraction frac2{3, 4};

    Fraction frac3;
    frac3 = frac1 + frac2;
    frac3.display();
    frac3.reduce();
    frac3.display();
    frac3 = frac1 - frac2;
    frac3.display();
    frac3.reduce();
    frac3.display();
    frac3 = frac1 * frac2;
    frac3.display();
    frac3.reduce();
    frac3.display();
    frac3 = frac1 / frac2;
    frac3.display();
    frac3.reduce();
    frac3.display();
    (frac1 == frac2)? std::cout << "True\n" : std::cout << "False\n"; 
    return 0;
}
