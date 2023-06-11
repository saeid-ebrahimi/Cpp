#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int sum=0;
	int num;
	cin >> num;
	int temp = num;
	while (temp)
	{
		sum = sum * 10 + (temp % 10);
		temp /= 10;
	}
	cout << sum <<endl;
	cout << sum * num;
	return 0;
}

