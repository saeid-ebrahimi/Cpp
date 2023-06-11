
#include "stdafx.h"
#include "Shape.h"

Shape::Shape():_x(0),_y(0){}

Shape::Shape(int init_x, int init_y)
{
	this ->_x = init_x;
	_y = init_y;
}

void Shape::move(int dx, int dy)
{
	_x += dx;
	_y += dy;
}
