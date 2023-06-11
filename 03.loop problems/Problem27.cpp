#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int num1;
	int sum_of_digits=0;
	cout << "Enter two Integer Number : ";
	cin >> num1;
	if (num1 >= 1 )
	{
		sum_of_digits = num1 % 10;
		while (num1 / 10)
		{
			num1 /= 10;
			sum_of_digits += num1 % 10;
			
		}
		cout << sum_of_digits << endl;
	}
	else
		cout << " Enter greater than 0 numbers" << endl;
	return 0;
}

