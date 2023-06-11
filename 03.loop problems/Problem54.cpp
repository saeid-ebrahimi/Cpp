#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int temp;
	cin >> a >> b;
	if (a < b)
	{
		temp = a;
		a = b;
		b = a;
	}
	while ( b > 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	cout << a << endl;
	return 0;
}

