#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double mul = 1;
	int cnt = 1;
	while (cnt <= 100)
	{
		cout << "enter num" << cnt << " : ";
		cin >> num;
		mul *= num;
		cnt++;
		cout << endl;
	}
	cout << "Sum of numbers is " << mul << endl;
	return 0;
}

