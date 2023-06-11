#pragma once
#include "Box.h"

class CubeBox
	:public Box
{
public:
	CubeBox(double side);
	void set_cube(double side);
	double get_side();
	double get_volume();
	double get_area();
private:
	double _side;
};