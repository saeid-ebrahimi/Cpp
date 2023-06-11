#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class myClass {
public:
	myClass(int _num = 99, double _num2=18.69):num(_num),num2(_num2) {}
	operator int();
	explicit operator double();
	int num;
	double num2;
};

myClass::operator int() {
	return num;
}

myClass::operator double() {
	return num2;
}

int main() {
	myClass mc;
	int myint = mc; //implicit conversion
	double mydouble = mc;
	std::cout << "myint is " << myint << " and mydouble is " <<
		mydouble << std::endl;
	double mydouble2 = double(mc); //explicit conversion
	int myint2 = (int)mc;
	std::cout << "myint2 is " << myint2 << " and mydouble2 is " <<
		mydouble2 << std::endl;
	return 0;
}