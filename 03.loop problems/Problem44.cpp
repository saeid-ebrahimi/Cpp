#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double polynom1=1;
	double polynom2 = 1;
	double sum=0;
	int cnt = 1;
	do
	{	
			polynom1 *=(cnt+1);
			if (cnt % 2)
				sum += 1 / polynom1;
			else
				sum -= 1 / polynom1;
		cnt ++;
	} while (cnt < 10);
	cout << sum << endl;
	return 0;
}

