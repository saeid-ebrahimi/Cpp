#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double x;
	double polynom1 = 1.0;
	double sum = 0;
	int fact = 1;
	double ans = 0.0;
	cout << "enter a number less than 1.0 and greater than 0.0" << endl;
	cin >> x;
	int cnt = 1;
	do
	{
		fact *= cnt;
		polynom1 *= x;
		if (cnt % 2)
		{
			ans = polynom1 / fact;
			if(cnt % 4 == 3)
			ans = -ans;
			sum += ans;
		}
		cnt++;
	} while (polynom1/fact >= 0.0001);
	cout << sum << endl;
	return 0;
}

