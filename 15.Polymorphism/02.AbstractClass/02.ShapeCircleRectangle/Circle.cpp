#include "stdafx.h"
#include "Circle.h"
#include <iostream>

Circle::Circle(int init_x, int init_y, int r)
	:Shape(init_x,init_y)
{
	if (r >= 0)
		_radius = r;
	else
	{
		std::cout << "invalid radius!!" << std::endl;
		_radius = 0;
	}
}
void Circle::scale(int s)
{
	_radius *= s;
}
void Circle::print()
{
	std::cout << "Circle: " << _x << "," << _y << "," << _radius << std::endl;

}