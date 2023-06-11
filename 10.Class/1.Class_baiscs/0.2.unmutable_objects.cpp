
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
	inline int get_x() const { return _x; };
	inline int get_y() const { return _y; };
	//inline void set_x(int x) const { _x = x; }; // compile error because const object fields cannot change
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
	// const objects or unmutable object cannot be assigned and we should initialize them first 
	Point const p1;
	// Point p2(); // compile error 
	Point const p3{};  //constant object 
	Point const p4(11, 12);
	Point const p5{ 13,14 };
	const Point p6(15, 16); //constant object too

	// cout << "p1 address: " << p1 << endl; //compiler error 
	cout <<"p1 (x,y): "<< p1.get_x() << " , "<< p1.get_y()<<endl;
	// p1.set_xy(1, 2); // compile error because p1 is unmutable
	cout << "p1 new (x,y): " << p1.get_x() << " , " << p1.get_y() << endl;

	cout << "p4 (x,y): " << p4.get_x() << " , " << p4.get_y() << endl;
	//p4.set_xy(3, 4); // compile error because p4 is unmutable
	cout << "p4 new (x,y): " << p4.get_x() << " , " << p4.get_y() << endl;




}