#pragma once

#include <iostream>

class Shape
{
public:
	Shape() {};
	~Shape() {};
	
	virtual void printArea() = 0;
};

