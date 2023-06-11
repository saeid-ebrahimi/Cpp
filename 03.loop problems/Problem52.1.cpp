#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int cnt= 0;
	int sum=0;
	int num;
	int mypow = 1;
	cin >> num;
	int temp = num;
	int temp1 = num;
	while (temp1/10)
	{
		mypow *= 10;
		temp1 /= 10;
	}
	cout << mypow;
	while (temp /10)
	{
		sum += (temp % 10)*mypow;
		temp /= 10;
		mypow /= 10;
	}
	cout << sum <<endl;
	return 0;
}

