#include "stdafx.h"
#include "CylenderBox.h"
#include <iostream>

CylenderBox::CylenderBox(double radius, double height)
{
	set_cylender_box(radius, height);
}

void CylenderBox::set_cylender_box(double radius, double height)
{
	if (radius > 0)
		_radius = radius;
	else
	{
		std::cerr << "invalid radius!" << std::endl;
		_radius = 0;
	}
	if (height > 0)
		_height = height;
	else
	{
		std::cerr << "invalid height!" << std::endl;
		_height = 0;
	}
}

double CylenderBox::get_radius()
{
	return _radius;
}

double CylenderBox::get_height()
{
	return _height;
}

double CylenderBox::get_volume()
{
	return (3.14*_radius*_radius)*_height;
}

double CylenderBox::get_area()
{
	double area = 2 * 3.14*_radius*_radius + 2 * 3.14*_radius*_height;
	return area;
}
