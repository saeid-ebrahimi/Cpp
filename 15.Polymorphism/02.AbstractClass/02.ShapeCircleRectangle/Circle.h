#pragma once
#include "Shape.h"

class Circle
	:public Shape
{
public:
	Circle(int init_x, int init_y, int r);
	virtual void scale(int s);
	virtual void print();
	~Circle() {}
private:
	int _radius; 
};