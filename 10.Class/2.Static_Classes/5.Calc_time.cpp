#include "stdafx.h"
#include <iostream>

using namespace std;

static class Calculate_time
{
public:
	Calculate_time();
	Calculate_time(double width, double _height, double velocity);
	static void set_area(double width,double height);
	static void set_velocity(double velocity);
	static double calc_time();
	static double calc_time(double velocity );
	static double calc_time(double width, double height, double velocity);
private:
	static double _width;
	static double _height;
	static double _velocity;
};
double Calculate_time::_height = 0;
double Calculate_time::_width = 0;
double Calculate_time::_velocity = 145.5;
Calculate_time::Calculate_time()
{
	_width = 0;
	_height = 0;
	_velocity = 145.5;
}
Calculate_time::Calculate_time(double width, double height, double velocity = 145.5)
{
	set_area(width, height);
	set_velocity(velocity);
}

void Calculate_time::set_area(double width, double height)
{
	if (width > 0 && height > 0)
	{
		_width = width;
		_height = height;
	}
	else
	{
		cout << "invalid parameters for area!" << endl;
		_width = 0;
		_height = 0;
	}
}
void Calculate_time::set_velocity(double velocity)
{
	if (velocity > 0)
		_velocity = velocity;
	else
	{
		cout << "invalid parameter for velocity!" << endl;
		_velocity = 145.5;
	}
}
double Calculate_time::calc_time(double velocity)
{
	set_velocity(velocity);
	return (_width*_height) / _velocity;
}
double Calculate_time::calc_time()
{
	return (_width*_height) / _velocity;
}
double Calculate_time::calc_time(double width, double height, double velocity = 145.5)
{
	return (width*height) / velocity;
}
int main()
{
	Calculate_time ct1;
	Calculate_time ct2(120.5, 140.5);
	Calculate_time ct3(130.7, 300.76,164.5);
	cout << ct1.calc_time(160.7, 280.9, 110.5) << endl;
	ct1.set_area(160.7, 280.9);
	ct1.set_velocity(90);
	cout << ct1.calc_time() << endl;
	cout << ct2.calc_time() << endl;
	cout << ct3.calc_time() << endl;
	cout << Calculate_time(10, 10, 20).calc_time() << endl;
	cout << Calculate_time::calc_time(10, 10, 20) << endl;
	return 0;
}