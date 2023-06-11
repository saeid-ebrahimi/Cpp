
#include "stdafx.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

class Point
{
public:
	Point() :_x(0), _y(0) {};
	Point(int x, int y = 0) :_x{x}, _y{y} {};
	~Point() {};
	inline int get_x() { return _x; };
	inline int get_y() { return _y; };
	inline void set_x(int x) { _x = x; };
	inline void set_y(int y) {_y = y;};
	void set_xy(int x , int y);
private:
	int _x;
	int _y;
};
void Point::set_xy(int x, int y)
{
	_x = x;
	_y = _y;
}
int main()
{
	Point p1;
	// Point p2(); // compile error 
	Point p3{};
	Point p4(11, 12);
	Point p5{ 13,14 };
	Point const	p6(15, 16);
	Point const p7{17, 18};

	// cout << "p1 address: " << p1 << endl; //compiler error 
	cout <<"p1 (x,y): "<< p1.get_x() << " , "<< p1.get_y()<<endl;
	p1.set_xy(1, 2);
	cout << "p1 new (x,y): " << p1.get_x() << " , " << p1.get_y() << endl;

	cout << "p3 (x,y): " << p3.get_x() << " , " << p3.get_y() << endl;
	p3.set_xy(3, 4);
	cout << "p3 new (x,y): " << p3.get_x() << " , " << p3.get_y() << endl;

	cout << "p4 (x,y): " << p4.get_x() << " , " << p4.get_y() << endl;
	p4.set_xy(5, 6);
	cout << "p4 new (x,y): " << p4.get_x() << " , " << p4.get_y() << endl;

	cout << "p5 (x,y): " << p5.get_x() << " , " << p5.get_y() << endl;
	p1.set_xy(7, 8);
	cout << "p5 new (x,y): " << p5.get_x() << " , " << p5.get_y() << endl;

	//cout << "p6 (x,y): " << p6.get_x() << " , " << p6.get_y() << endl; //compile error because p6 is a const object and unmutable 
	
	//p6.set_xy(1, 2); //compile error because p6 is a const object and unmutable 
	

}