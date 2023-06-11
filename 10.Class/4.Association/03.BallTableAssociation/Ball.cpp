#include "stdafx.h"
#include <cstdlib>
#include "Table.h"
#include "Ball.h"

Ball::Ball(int x, int y, int vx, int vy, Table* t)
{
	_table = t;
	if (!_table->contains_point(x, y))
		abort();
	_x = x;
	_y = y;
	_vx = vx;
	_vy = vy;
}
void Ball::move(int dt)
{
	_x = _x + _vx*dt;
	_y = _y + _vy*dt;
	while (!_table ->contains_point(_x,_y))
		_table->reflect(_x, _y, _vx, _vy);
}