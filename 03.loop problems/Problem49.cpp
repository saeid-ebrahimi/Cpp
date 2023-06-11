#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double sum=0.0;
	int cnt = 0;
	cout << "enter numbers to calculate mean of them (enter a negative number to finish) : ";
	cin >> num;
	while (num >= 0.0)
	{
		sum += num;
		cnt++;
		cin >> num;
	}
	if (cnt != 0)
	{
		double mean = sum / cnt;
		cout << "mean is : " << mean<< endl;
	}
	else
		cout << "enter at least one posetive number!!" << endl;
	
	return 0;
}

