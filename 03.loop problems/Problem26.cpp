#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int num1;
	int num_of_digits=1;
	cout << "Enter two Integer Number : ";
	cin >> num1;
	if (num1 >= 1 )
	{
		while (num1 / 10)
		{
			num_of_digits++;
			num1 /= 10;
		}
		cout << num_of_digits << endl;
	}
	else
		cout << " Enter greater than 0 numbers" << endl;
	return 0;
}

