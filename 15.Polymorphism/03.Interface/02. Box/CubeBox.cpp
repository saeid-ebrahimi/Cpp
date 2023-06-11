#include "stdafx.h"
#include "CubeBox.h"
#include <iostream>
CubeBox::CubeBox(double side)
{
	set_cube(side);
}

void CubeBox::set_cube(double side)
{
	if (side > 0)
		_side = side;
	else
	{
		std::cerr << "invalid side!" << std::endl;
		_side = 0;
	}
}

double CubeBox::get_side()
{
	return _side;
}

double CubeBox::get_volume()
{
	return _side*_side*_side;
}

double CubeBox::get_area()
{
	return 6*_side*_side;
}
