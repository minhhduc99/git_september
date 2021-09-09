#include "Shape.cpp"

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    ~Rectangle() {

    }

    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    double getArea()
    {
        return length * width;
    }

    double getPerimeter()
    {
        return (length + width) * 2;
    }
};