#pragma once

#include <iostream>

class Shape
{
public:
	Shape() {};
	virtual ~Shape() {};
	
	virtual void printArea() = 0;
};

