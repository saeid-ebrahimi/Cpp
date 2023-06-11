#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 10
using namespace std;

int main()
{
	double number;
	double num[10];
	double sum = 0.0;
	cout << "enter " << PAR << " number: " << endl;
	double max = 0.0;
	for (int i = 0; i < PAR; i++)
	{
		cin >> number;
		num[i] = number;
		if (number >= max)
			max = number;
	}

	for (int i = 0; i < PAR; i++)
	{
		num[i] += (20.0 - max);
		cout << num[i] << "  ";
	}
	
	cout <<endl;

}

