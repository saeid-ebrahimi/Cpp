#pragma once
#include "Shape.h"
class Rectangle
	:public Shape
{
public:
	Rectangle(int init_x, int init_y, int width, int height);
	virtual void scale(int s);
	virtual void print();
	~Rectangle() {}
private:
	int _width;
	int _height;
};