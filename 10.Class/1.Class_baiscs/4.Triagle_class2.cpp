
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
	Triangle() { _base = _height = 1; _count++; }
	Triangle(double base, double height);
	double area();
	void print_area(double area);
	~Triangle() { _count--; };
	void setter(double base, double height);
private:
	static int _count;
	int tri_number = _count;
	double _height;
	double _base;
};
int Triangle::_count = 1;
Triangle::Triangle(double base, double height)
{
	if (base > 0 && height > 0)
	{
		_base = base;
		_height = height;
		_count++;

	}
	else
	{
		cout << "invalid measure for side in constructor!!" << endl;
		_base = _height = 0;
		_count++;
	}
}

double Triangle::area()
{
	return 0.5*_base*_height;
}
void Triangle::setter(double base, double height)
{
	if (base > 0 && height > 0)
	{
		_base = base;
		_height = height;
	}
	else
	{
		cout << "invalid measure for side in set_sides_method!!" << endl;
		_base = _height = 0;
	}
}
void Triangle::print_area(double area)
{
	cout << "triangle #" << tri_number << endl;
	cout << "\tbase= " << _base << endl;
	cout << "\theight = " << _height << endl;
	cout << "\tarea = " << area << endl;
}
int main()
{
	Triangle tr1;
	Triangle tr2(15.3, 17.6);
	tr1.setter(12.5, 10.6);
	tr1.print_area(tr1.area());
	tr2.print_area(tr2.area());
}