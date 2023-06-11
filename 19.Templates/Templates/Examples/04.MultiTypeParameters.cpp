// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;
template<class pointx, class pointy, class pointz>
class MultiTypePoint
{
public:
	MultiTypePoint(pointx x, pointy y, pointz z):px(x), py(y), pz(z)
	{
		cout << "MultiTypePoint object constructor called!!" << endl;
	}
	void printPoint() {
		cout << " X: " << px << " Y: " << py <<endl;
	}
	~MultiTypePoint(){}

private:
	pointx px;
	pointy py;
	pointz pz;
};

template<class pointx, int pointy, int pointz>
class MultiTypedPoint2 
{
public:
	MultiTypedPoint2(pointx x) : px(x), py(pointy), pz(pointz) {
		cout << "MultiTypedPoint object constructor." << endl;
	}

	void printPoint() {
		cout << " X " << px << " Y " << py << " Z " << pz << endl;
	}
	~MultiTypedPoint2() {}

private:
	pointx px;
	int py;
	int pz;
};