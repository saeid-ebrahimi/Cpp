#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double x;
	double polynom1 = 1.0;
	double sum = 0;
	int fact = 1;
	cout << "enter a number less than 1.0 and greater than 0.0" << endl;
	cin >> x;
	int cnt = 1;
	do
	{
		polynom1 *= x;
		fact *= cnt;
		sum += polynom1 / fact;
		cnt++;
	} while (polynom1/fact >= 0.0001);
	cout << sum << endl;
	return 0;
}

