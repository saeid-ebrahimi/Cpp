#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num1, num2, num3;
	cout << "Please Enter edges dimension : ";
	cin >> num1 >> num2 >> num3;
	double max = 0.0;
	
	if (num1 > num2)
		max = num1;
	else
		max = num2;
	if (max < num3)
		max = num3;
	cout << "Max number is " << max << endl;
	return 0;
}

