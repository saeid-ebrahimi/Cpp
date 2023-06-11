#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	int num;
	int temp = 0;
	int coe = 1;
	cout << " enter a natural number in base 10 : ";
	cin >> num ;
	cout << "enter the new base : " << endl;
	cin >> n;
	if (n >= 2 && num > 0)
	{

		while (num)
		{
			
			temp += (num % n)*coe;
			num /= n;
			coe *= 10;
		}
		cout << temp << endl;
	}
	else
		cout << "Invalid base" << endl;
	return 0;
}

