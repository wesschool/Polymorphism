#include "Circle.h"
#include <cmath>

#define pie 3.1415

Circle::Circle(int r)
	:radius(r)
{
}

Circle::~Circle()
{
}


void Circle::printArea()
{
	std::cout << "Circle Area = " << pie * powf(radius, 2) << std::endl;
}