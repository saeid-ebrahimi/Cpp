#include "stdafx.h"
#include <iostream>
#include <math.h>
#define PAR 10
using namespace std;

int main()
{
	int cnt=0;
	int max = 0;
	double maxi = 0.0;
	double num[10];
	cout << "enter " << PAR << " number: " << endl;
	for (int i = 0; i < PAR; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < PAR; i++)
	{
		for (int j = i+1; j < PAR; j++)
		{
			if (num[i] == num[j])
				cnt++;
		}
		if (cnt > max)
		{
			max = cnt;
			maxi = num[i];
			cnt = 0;
		}
	}
	
	cout << maxi << endl;
}

