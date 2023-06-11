
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
	Triangle(double value1, double value2);
	void show_sides_val();
	double area();
	~Triangle() {};
	void set_sides(double value1, double value2);
private:
	double _side1;
	double _side2;
	double _side3;
};

Triangle::Triangle(double value1, double value2)
{
	if (value1 > 0 && value2 > 0)
	{
		_side1 = abs(value1*value1 - value2*value2);
		_side2 = value1*value1 + value2*value2;
		_side3 = 2*value1*value2;
	}
	else
	{
		cout << "invalid measure for side in constructor!!" << endl;
		_side3 = _side2 = _side1 = 0;
	}
}

double Triangle::area()
{
	return 0.5*_side1*_side2;
}
void Triangle::set_sides(double value1, double value2)
{
	if (value1 > 0 && value2 > 0)
	{
		_side1 = abs(value1*value1 - value2*value2);
		_side2 = value1*value1 + value2*value2;
		_side3 = 2 * value1*value2;
	}
	else
	{
		cout << "invalid measure for side in set_sides_method!!" << endl;
		_side3 = _side2 = _side1 = 0;
	}
}
void Triangle::show_sides_val()
{
	cout << "side1: " << _side1 << endl;
	cout << "side2: " << _side2 << endl;
	cout << "side3: " << _side3 << endl;
}
int main()
{
	Triangle tr1;
	Triangle tr2(15.3, 17.6);
	tr1.set_sides(12.5, 10.6);
	tr1.show_sides_val();
	tr2.show_sides_val();
	cout << tr1.area() << "\t" << tr2.area() << endl;
}