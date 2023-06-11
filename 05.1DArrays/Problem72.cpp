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
		num[i] = number % 10;
		number /= 10;
	}
	int idx;
	for (int i = PAR - 1; (num[i] == 0 && i > 0); i--)
		idx = i;
	for (int i = idx-1; i >= (idx-1)/2; i--)
	{
		if (num[i] == num[idx - i - 1])
			continue;
		else
		{
			cout << "na motagharen" << endl;
			return 0;
		}
	}
	cout << "Motagharen" << endl;
}

