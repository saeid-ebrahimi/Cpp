#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	double num;
	double sum1= 0.0;
	double sum2=0.0;
	double var;
	cout << " num of inputs : ";
	cin >> n ;
	cout << "value of numbers: " << endl;
	if(n >= 1)
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			sum1 += num *num;
			sum2 += num;
		}
	sum1 /= n;
	sum2 /= n;
	sum2 *= sum2;
	var = sum1 - sum2;
	cout << var << endl;
	return 0;
}

