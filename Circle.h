#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle(int r);
	~Circle();

	void printArea();

private:
	float radius;
};

