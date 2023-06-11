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
		sum += number;
	}
	double mean = sum / PAR;
	sum = 0;
	for (int i = 0; i < PAR; i++)
	{
		sum += abs(num[i] - mean);
	}
	double ad = sum / PAR;
	cout <<ad<<endl;

}

