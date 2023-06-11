#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double sum = 0;
	int cnt = 1;
	while (cnt <= 100)
	{
		cout << "enter num" << cnt << " : ";
		cin >> num;
		sum += num;
		cnt++;
		cout << endl;
	}
	cout << "Sum of numbers is " << sum << endl;
	return 0;
}

