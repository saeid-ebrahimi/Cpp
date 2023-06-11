
#include "stdafx.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
class Square
{
public:
	Square() :_side(0) {};
	Square(double side);
	~Square() {};
	double perimeter();
	double area();
	void set_side(double side);
private:
	double _side;
};
Square::Square(double side)
{
	if (side >= 0)
		_side = side;
	else
	{
		cout << "invalid side amount for constructor!!" << endl;
		_side = 0;
	}
		
}
double Square::perimeter()
{
	return _side * 2;
}
double Square::area()
{
	return _side*_side;
}
void Square::set_side(double side)
{
	if (side >= 0)
		_side = side;
	else
	{
		cout << "invalid side amount for set_side func!" << endl;
		_side = 0;
	}
}
int main()
{
	Square sq1;
	Square sq2(12.36);
	Square sq3(-1.3);
	sq1.set_side(18.6);
	cout << "perimiters:" << sq1.perimeter() << "\t";
	cout << sq2.perimeter() << "\t" << sq3.perimeter() << endl;
}