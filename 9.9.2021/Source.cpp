#include "Shape.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

int main(void)
{
    Shape* first_shape = new Rectangle(6, 7);
    Shape* second_shape = new Circle(5);

    std::cout << first_shape->getArea() << std::endl;
    std::cout << first_shape->getPerimeter() << std::endl;

    std::cout << second_shape->getArea() << std::endl;
    std::cout << second_shape->getPerimeter() << std::endl;

    delete first_shape;
    delete second_shape;
    return 0;
}