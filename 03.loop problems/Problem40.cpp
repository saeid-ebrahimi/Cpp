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
		polynom += 1.0 / cnt;
	} while (cnt < 10);
	cout << polynom << endl;
	return 0;
}

