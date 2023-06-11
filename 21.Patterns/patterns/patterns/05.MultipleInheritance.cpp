// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<class type>
class Shape
{
	virtual type area() = 0;
};
class drawShape {

	virtual void draw() = 0;
};
template<class type>
class Rectangle : public Shape<type>, public drawShape
{
public:
	Rectangle(type wd, type hg) : width(wd), height(hg) {}

	type area()
	{
		return (width * height);
	}

	void setWidth(type wd) {
		width = wd;
	}

	void setHeight(type hg) {
		height = hg;
	}
	void draw() {
		string lhs, spaces, line;

		for (int i = 0; i < width; i++) {
			spaces = spaces + "  ";
			line = line + "==";
		}

		for (int i = 0; i <= height; i++) {

			if (i == 0) {
				//top line
				lhs = lhs + "+" + line + "+\n";
			}
			else if (i == height) {
				//bottom line
				lhs = lhs + "+" + line + "+\n";
			}
			else {
				lhs = lhs + "|" + spaces + "|\n";
			}
		}


		cout << lhs.c_str();

		cout << "\n\n";
	}
private:
	type width, height;
};
template<class type>
class Triangle : public Shape<type>, public drawShape
{
public:

	Triangle(type ba, type alt) : base(ba), altitude(alt) {}

	type area()
	{
		return (base * altitude) / 2;
	}

	void setBase(type ba) {
		base = ba;
	}

	void setAltitude(type alt) {
		altitude = alt;
	}
	void draw() {


		string line, spaces;
		int intBase = (int)floor(base);
		int intAlt = (int)floor(altitude);
		int counter = 0;
		vector<string> lines;
		for (int i = 0; i <= intAlt; i++) {
		std:string spstring(counter, ' ');
			line = line + spstring;
			for (int t = counter; t <= intBase - counter; t++) {
				line = line + "-";
			}
			counter++;
			spaces.clear();
			//next line
			lines.push_back(line);
			line.clear();
		}
		//print
		std::reverse(lines.begin(), lines.end());
		for (vector<string>::iterator it = lines.begin(); it != lines.end(); it++) {
			string s = *it;
			cout << s.c_str() << "\n";
		}

		cout << "\n\n\n";
	}

private:
	type base, altitude;
};


int main()
{
	Rectangle<int> rect(10, 5);
	Triangle<float> tri(8.3, 4.5);

	cout << "Rectangle area is " << rect.area() << "\n";
	printf("Triangle area is %f \n", tri.area());

	//Ascii art
	rect.draw();
	tri.draw();


}