#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double polynom1 = 1;
	double polynom2 = 1;
	double sum = 0;
	int cnt = 1;
	do
	{
		polynom1 *= (cnt + 1)*cnt;
		polynom2 *= cnt + (cnt+1);
		sum += polynom1 / polynom2;
		cnt+=2;
	} while (cnt < 9);
	cout << sum << endl;
	return 0;
}

