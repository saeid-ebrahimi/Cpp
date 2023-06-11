#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 20
using namespace std;

int main()
{
	int number;
	int num[PAR];
	cout << "enter an number in base 10 : ";
	cin >> number;
	for (int i = 0; i < PAR ; i++)
	{
		num[i] = number % 2;
		number /= 2;
	}
	int idx;
	for (int i = PAR - 1; (num[i] == 0 && i > 0); i--)
		idx = i;
	for (int i = idx-1; i >= 0; i--)
	{
		cout << num[i];
	}
	cout << endl;
}

