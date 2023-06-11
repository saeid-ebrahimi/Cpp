// polymorphism.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>

using namespace std;

int main()
{
	vector<Shape*> shapes;
	while (true)
	{
		cout << "r.New Rectangle" << endl;
		cout << "c.New Circle" << endl;
		cout << "d.Display Shapes" << endl;
		cout << "m.Move All" << endl;
		cout << "s.Scale All" << endl;
		cout << "q.Quit" << endl;

		char ch;
		cin >> ch;
		
		if (ch == 'r')
		{
			int x, y, w, h;
			cout << "enter x,y,width, and height respectively: ";
			cin >> x >> y >> w >> h;

			Rectangle* rec = new Rectangle(x, y, w, h);
			shapes.push_back(rec); 

		}
		else if (ch == 'c')
		{
			int x, y, r;
			cout << "enter x,y,radius: ";
			cin >> x >> y >> r;

			Circle* cir = new Circle(x, y, r);
			shapes.push_back(cir); 
		}
		else if (ch == 'd')
		{
			for (int i = 0; i < shapes.size(); i++)
				shapes[i] -> print();
			cout << endl;
		}
		else if (ch == 'm')
		{
			int dx, dy;
			cout << "enter dx,dy: ";
			cin >> dx >> dy;
			for (int i = 0; i < shapes.size(); i++)
				shapes[i]->move(dx, dy);
		}
		else if (ch == 's')
		{
			int s;
			cout << "enter s: ";
			cin >> s;
			for (int i = 0; i < shapes.size(); i++)
				shapes[i]->scale(s);
		}
		else if (ch == 'q')
		{
			for (int i = 0; i < shapes.size(); i++)
				delete shapes[i];
			break;
		}
		else
			cout << "invalid char entered!!";
	}
    return 0;
}

