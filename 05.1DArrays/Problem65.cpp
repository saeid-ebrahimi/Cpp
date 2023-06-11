#include "stdafx.h"
#include <iostream>
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
	for (int i = 0; i < PAR; i++)
	{
		if (num[i] < num[PAR - 1])
		{
			cnt++;
		}
	}
	cout << cnt << endl;

}

