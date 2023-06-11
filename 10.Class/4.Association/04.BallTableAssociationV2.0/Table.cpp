
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
void Table::reflect(Ball* b)
{ 
	int x = b->get_x();
	int y = b->get_y();
	int vx = b->get_vx();
	int vy = b->get_vy();

	while (!contains_point(x, y))
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
			y = 2 * _height - y;	
			vy = -vy;
		}
	}
	b->set_location(x, y);
	b->set_speed(x, y);

}