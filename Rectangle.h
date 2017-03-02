#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle(int w, int h);
	~Rectangle();

	void printArea();

private:
	float width;
	float height;
};

