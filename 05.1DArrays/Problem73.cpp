#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 10
using namespace std;

int main()
{
	int number;
	int num[PAR];
	cout << "enter "<<PAR<<" number to sort : ";
	for (int i = 0; i < PAR ; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < PAR-1; i++)
	{
		for (int j = 0; j < PAR -1; j++)
		{
			if (num[j] > num[j + 1])
			{
				number = num[j];
				num[j] = num[j + 1];
				num[j + 1] = number;
			}
		}
		
	}
	for (int i = 0; i < PAR; i++)
	{
		cout << num[i] << "  ";
	}
	cout << endl;
}

