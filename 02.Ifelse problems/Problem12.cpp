#include "stdafx.h"
#include <iostream>
#include <math.h>


using namespace std;
int main()
{
	double a, b, c;
	cout << "Please enter second degree equality coefficients respectively : ";
	cin >> a >> b >> c;
	cout << "your equality is " << a << "x^2 + " << b << "x + " << c << " = 0 " << endl;
	double delta = b * b - 4 * a*c;
	if (delta > 0)
	{
		double x1 = 0.5*(-b + sqrt(delta)) / a;
		double x2 = 0.5*(-b - sqrt(delta)) / a;
		cout << "It has 2 roots : " << x1 << " " << x2 << endl;

	}
	else if (delta < 0)
		cout << "It has no root" << endl;
	else if (delta == 0)
	{
		double root = 0.5*-b / a;
		cout << "It has 1 root : " << root << endl;
	}
	return 0;
}

