#pragma once
class Box {
public:
	// pure virtual function
	virtual double get_volume() = 0;
	virtual double get_area() = 0;

private:
	double length;      // Length of a box
	double breadth;     // Breadth of a box
	double height;      // Height of a box
};