#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double polynom1 = 1;
	double polynom2 = 1;
	double ans = 0;
	int cnt = 0;
	do
	{
		if (cnt % 2)
			polynom1 *= (cnt + 2);
		else
			polynom2 *= (cnt + 2);
		cnt++;
	} while (cnt < 8);
	ans = polynom1 / polynom2;
	cout << ans << endl;
	return 0;
}

