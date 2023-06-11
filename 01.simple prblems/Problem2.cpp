// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define PI 3.14
using namespace std;
int main()
{
	int x;
	cout << "Please Enter Circle Radius : " << endl;
	cin >> x;
	cout << "Circumference is : " << 2 * PI*x << " and Surface is :" << PI*x*x << endl;
	return 0;
}

