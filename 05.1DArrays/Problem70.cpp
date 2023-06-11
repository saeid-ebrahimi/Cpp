#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 10
using namespace std;

int main()
{

	double num[10];
	cout << "enter " << PAR << " number: " << endl;
	for (int i = 0; i < PAR; i++)
	{
		cin >> num[i];
	}
	int cnt = 0;
	cout << "Inputs without any repeat :" << endl;
	for (int i = 0; i < PAR; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
				cnt++;
		}
		if (cnt >= 1)
			cnt = 0;
		else
			cout << num[i] << endl;
	}
	
	
}

