#pragma once
#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D
{
private:
	int _m_x;
	int _m_y;

public:
	// A default constructor
	Point2D()
		: _m_x{ 0 }, _m_y{ 0 }
	{
	}

	// A specific constructor
	Point2D(int x, int y)
		: _m_x{ x }, _m_y{ y }
	{
	}
	// Access functions
	void setPoint(int x, int y)
	{
		_m_x = x;
		_m_y = y;
	}
	void print_point()
	{
		std::cout << '(' << _m_x << ", " << _m_y << ')' << std::endl;
	}
};

#endif