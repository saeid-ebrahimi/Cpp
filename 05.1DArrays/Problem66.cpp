#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 10
using namespace std;

int main()
{
	double num[10];
	double sum = 0.0;
	cout << "enter " << PAR << " number: " << endl;
	for (int i = 0; i < PAR; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	double mean = sum / PAR;
	int cnt = 0;
	for (int i = 0; i < PAR; i++)
	{
		if (abs(num[i] - mean) <= 1)
			cnt++;
	}
	
	cout << mean << endl;
	cout << cnt << endl;

}

