#include "Rectangle.h"

Rectangle::Rectangle(int w, int h)
	:width(w), height(h)
{};

Rectangle::~Rectangle()
{
}


void Rectangle::printArea()
{
	std::cout <<"Rectangle Area = " << width * height << std::endl;
}