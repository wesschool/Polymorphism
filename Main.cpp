#include "Rectangle.h"
#include "Circle.h"
#include <vector>

using namespace std;

int main()
{
	vector <Shape*> shapes;
	Circle circle(1);
	Rectangle rect(3, 4);
	shapes.push_back(&circle);
	shapes.push_back(&rect);
	
	for (int i = 0; i < shapes.size(); i++)
	{
		shapes[i]->printArea();
	}
}