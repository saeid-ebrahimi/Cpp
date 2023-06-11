#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 20
using namespace std;

int main()
{
	int number;
	int base;
	int num[PAR];
	cout << "enter an number in base 10 : ";
	cin >> number;
	cout << "enter your desire base: ";
	cin >> base;
	for (int i = 0; i < PAR; i++)
	{
		num[i] = number % base;
		number /= base;
	}
	int idx;
	for (int i = PAR - 1; (num[i] == 1 && i > 0); i--)
		idx = i;
	for (int i = idx - 1; i >= 0; i--)
	{
		cout << num[i];
	}
	cout << endl;
}

