#ifndef _SHAPE_CPP
#define _SHAPE_CPP

#include <iostream>

class Shape
{
public:
	virtual ~Shape() {

	}

	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
};

#endif