#include "Circle.h"

#define pi 3.1415

Circle::Circle(float r)
	:radius{r}
{
}

Circle::~Circle()
{
}


void Circle::printArea()
{
	std::cout << "Circle Area = " << pi * radius * radius << std::endl;
}
