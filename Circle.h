#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle(float r);
	~Circle();

	void printArea();
	
private:
	float radius;
};

