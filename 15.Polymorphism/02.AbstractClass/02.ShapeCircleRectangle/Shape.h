#pragma once

class Shape
{
public:
	Shape();
	Shape(int init_x,int init_y);
	inline int get_x() { return _x; }
	inline int get_y() { return _y; }
	void move(int dx, int dy);

	virtual void scale(int s) = 0; //pure virtual functions -> abstract class
	virtual void print() = 0;
	~Shape() {}

protected:
	int _x;
	int _y;

};