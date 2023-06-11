
#include "stdafx.h"
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Point
{
public:
	Point() :_x{ 0 }, _y{ 0 }, _z{ 0 } {}
	Point(int x, int y = 0, int z = 0) :_x(x), _y(y), _z(z) {}
	inline void set_xyz(int x, int y = 0, int z = 0) { _x = x; _y = y; _z = z; }
	double norm();
	~Point(){}
	void negative();
	void print();
private:
	int _x;
	int _y;
	int _z;
};
void Point::negative()
{
	_x *= -1;
	_y *= -1;
	_z *= -1;
}
double Point::norm()
{
	double norm = _x*_x + _y*_y + _z*_z;
	norm = sqrt(norm);
	return norm;
}
void Point::print()
{
	cout << "(" << _x << ", " << _y << ", " << _z << ")" << endl;
}
int main()
{
	Point pt(3, 6, 12);
	pt.print();
	pt.negative();
	pt.print();
	cout << pt.norm() << endl;
	cout << Point(4, 6, 8).norm() << endl;
}