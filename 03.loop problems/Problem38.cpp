#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	int cnt = 1;
	double sum = 0.0;
	int meanCnt = 0;
	while (cnt <= 5)
	{
		cout << " please enter an number greater than -1 : ";
		cin >> num;
		if (num >= 0.0 && num <= 20.0)
		{
			if (num > 15.00)
			{
				sum += num;
				meanCnt++;
			}
		}
		else
			cout << " please enter an number greater than -1 !! " << endl;
		cnt++;
	}
	cout << "mean is : " << sum / meanCnt << endl;
	return 0;
}

