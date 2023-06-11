#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double polynom=0;
	int cnt = 0;
	do
	{
		cnt++;
		if (cnt % 2)
			polynom += 1.0 / cnt;
		else
			polynom -= 1.0 / cnt;
	} while (cnt < 10);
	cout << polynom << endl;
	return 0;
}

