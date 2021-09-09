#include "Shape.cpp"
#define PI 3.14

class Circle : public Shape
{
private:
    double radius;
public:
    ~Circle() {

    }

    Circle(double radius)
    {
        this->radius = radius;
    }

    double getArea()
    {
        return PI * radius * radius;
    }

    double getPerimeter()
    {
        return 2 * PI * radius;
    }
};