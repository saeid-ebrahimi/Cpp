// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int height;
	int width;
	cout << "Please Enter Rectangle Width : ";
	cin >> width;
	cout << "Please Enter Rectangle Hieght: ";
	cin >> height;
	cout << "perimiter is :  " << 2 * (width + height) << "  and Surface is :  " << width * height << endl;
	return 0;
}

