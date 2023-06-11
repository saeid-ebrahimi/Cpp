#include "stdafx.h"
#include <iostream>
#define PAR 10
using namespace std;

int main()
{
	double num[10];
	cout << "enter "<<PAR<<" number: " << endl;
	for (int i = 0 ; i < PAR; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < PAR; i++)
	{
		cout << num[PAR - i - 1] << endl;
	}

	
}

