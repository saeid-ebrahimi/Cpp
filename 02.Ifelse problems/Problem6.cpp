// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int num;
	cout << "Please Enter a number : ";
	cin >> num;
	if (num >= 0)
	{
		if (num % 2 == 0)
			cout << "It's an even number !! " << endl;
		else if (num % 2 != 0)
			cout << "it's an odd number !! " << endl;
	}
	else
		cout << "Invalid input" << endl;
	return 0;
}

