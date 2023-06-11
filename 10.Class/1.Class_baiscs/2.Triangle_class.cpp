
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Triangle
{
public:
	Triangle(){_side1 = _side2 = _side3 = 0;}
	Triangle(double side1);
	Triangle(double side1, double side2);
	Triangle(double side1, double side2, double side3);
	double area();
	~Triangle() {};
	void set_sides(double side1, double side2, double side3);
private:
	double _side1;
	double _side2;
	double _side3;
};
Triangle::Triangle(double common_side)
{
	if (common_side > 0)
		_side3=_side2=_side1 = common_side;
	else
	{
		cout << "invalid measure for side in constructor!!" << endl;
		_side3 = _side2 = _side1 = 0;
	}
}
Triangle::Triangle(double common_side, double side2)
{
	if (common_side > 0 && side2 > 0)
	{
		_side2 = _side1 = common_side;
		_side3 = side2;
	}
	else
	{
		cout << "invalid measure for side in constructor!!" << endl;
		_side3 = _side2 = _side1 = 0;
	}
}
Triangle::Triangle(double side1, double side2, double side3)
{
	if (side1 > 0 && side2 > 0 && side3 > 0)
	{
		_side2 = _side1 = side1;
		_side3 = side2;
	}
	else
	{
		cout << "invalid measure for side in constructor!!" << endl;
		_side3 = _side2 = _side1 = 0;
	}
}
double Triangle::area()
{
	double sides_mean = (_side1 + _side2 + _side3) / 2.0;
	double area = sqrt(sides_mean * (sides_mean - _side1)*(sides_mean - _side2)*(sides_mean-_side3));
	return area;
}
void Triangle::set_sides(double side1, double side2, double side3)
{
	if (side1 && side2 && side3)
	{
		_side1 = side1;
		_side2 = side2;
		_side3 = side3;
	}
	else
	{
		cout << "invalid measure for sides in set_sides!" << endl;
		_side1 = _side2 = _side3 = 0;
	}
}

int main()
{
	Triangle tr1;
	Triangle tr2(13.6);
	Triangle tr3(15.3, 17.6);
	tr1.set_sides(12.5, 10.6, 9.5);
	cout << tr1.area() << "\t" << tr2.area() << "\t" << tr3.area() << endl;
}