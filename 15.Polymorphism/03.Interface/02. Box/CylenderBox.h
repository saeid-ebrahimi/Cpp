#pragma once
#include "Box.h"
class CylenderBox
	: public Box
{
public:
	CylenderBox(double radius, double height);
	void set_cylender_box(double radius, double height);
	double get_radius();
	double get_height();
	double get_volume();
	double get_area();
private:
	double _radius;
	double _height;
};