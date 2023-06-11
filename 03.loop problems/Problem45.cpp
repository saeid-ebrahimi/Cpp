#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double x;
	double polynom1 = 1;
	double sum = 0;
	
	cout << "enter a number less than 1.0 and greater than 0.0" << endl;
	cin >> x;
	int cnt = 1;
	do
	{
		polynom1 *= x;
		if (cnt % 2)
			sum += polynom1 / cnt;
		else
			sum -= polynom1 / cnt;
		cnt++;
	} while (polynom1/cnt >= 0.0001);
	cout << sum << endl;
	return 0;
}

