#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	int cnt = 1;
	double max = 0.0;
	double sec;
	while (cnt <= 5)
	{
		cout << " please enter an number greater than -1 : ";
		cin >> num;
		if (num >= 0.0 && num <= 20.0)
		{
			if (num >= max)
			{
				sec = max;
				max = num;	
			}
		}
		else
			cout << " please enter an number greater than -1 !! " << endl;
		cnt++;
	}
	cout << "second greatest number is : " << sec << endl;
	return 0;
}

