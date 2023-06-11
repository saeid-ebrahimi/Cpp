#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int init_x, int init_y, int width, int height)
	:Shape(init_x,init_y)
{
	if (width <= 0 || height <= 0)
	{
		std::cout << "invalid width or height!!" << std::endl;
		_width = _height = 0;
	}
	else
	{
		_width = width;
		_height = height;
	}
}
void Rectangle::scale(int s)
{
	_width *= s;
	_height *= s;
}
void Rectangle::print()
{
	std::cout << "Rectangle: " << _x << "," << _y << 
		',' << _width << "," << _height << std::endl;
}