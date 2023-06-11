// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int x, y, z;
	cout << "Please Enter three numbers respectivily : ";

	cin >> x >> y >> z;
	double mean = (x + y + z) / 3.0; 
	cout << "Mean is : " << mean << endl;
	return 0;
}

