#pragma once

class Table
{
public:
	Table(int w, int h);
	bool contains_point(int x, int y);  // to solve dependency to table shape
	void reflect(int& x, int& y, int& vx, int& vy);
	~Table() {};

private:
	int _width;
	int _height;
};
