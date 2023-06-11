#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double num[1000];
	num[0] = 1;
	num[1] = 5;
	if (n >= 1)
	{
		for (int i = 2; i < n; i++)
		{
			num[i] = (num[i - 1] + num[i - 2]) / 2.0;
		}
		cout << num[n - 1] << endl;
	}
	else
	{
		cout << "Enter Valid N" << endl;
	}
	
}

