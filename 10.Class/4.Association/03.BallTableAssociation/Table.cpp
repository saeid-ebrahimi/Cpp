
#include "stdafx.h"
#include "Table.h"
#include <iostream>
#include <cstdlib>

Table::Table(int w, int h)
{
	if (w > 0 && h > 0)
	{
		_width = w;
		_height = h;
	}
	else
		abort();
}
bool Table::contains_point(int x, int y)
{
	return (x >= 0 && x < _width && y >= 0 && y < _height);
}
void Table::reflect(int& x, int& y, int& vx, int& vy)
{
	if (x < 0)
	{
		x = -x;
		vx = -vx;
	}
	if (x > _width)
	{
		x = 2 * _width - x;
		vx = -vx;
	}
	if (y < 0)
	{
		y = -y;
		vy = -vy;
	}
	if (y > 0)
	{
			y = 2 * _height - y;			vy = -vy;
	}
	

}