#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	int cnt = 1;
	double min=20;
	while (cnt <= 5)
	{
		cout << " please enter an number greater than -1 : ";
		cin >> num;
		if (num >= 0.0 && num <= 20.0)
		{
			if (num < min)
				min = num;
		}
		else
			cout << " please enter an number greater than -1 !! " << endl;
		cnt++;
	}
	cout << "minimum number is : " << min << endl;
	return 0;
}

