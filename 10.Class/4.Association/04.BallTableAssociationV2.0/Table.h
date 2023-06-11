#pragma once
#include "Ball.h"
class Table
{
public:
	Table(int w, int h);
	bool contains_point(int x, int y);  // to solve dependency to table shape
	void reflect(Ball* b);
	~Table() {};

private:
	int _width;
	int _height;
};
