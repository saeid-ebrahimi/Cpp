#pragma once

class Table;
class Ball
{
public:
	Ball(int x,int y,int vx, int vy,Table* table);
	void move(int dt);
	inline int get_x() { return _x; }
	inline int get_y() { return _y; }
	inline int get_vx() { return _vx; }
	inline int get_vy() { return _vy; }
	void set_location(int x, int y);
	void set_speed(int x, int y);
	~Ball() {}

private:
	int _x;
	int _y;
	int _vx;
	int _vy;
	Table* _table;

};

