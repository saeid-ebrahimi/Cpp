#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double sumOfPosNums=0;
	int cnt = 1;
	while (cnt <= 5)
	{
		cout << "enter num" << cnt << " : ";
		cin >> num;
		if (num > 0.0)
		{
			sumOfPosNums += num;
		}
		cnt++;
		cout << endl;
	}
	cout << "Num of posetive nums is :  " << sumOfPosNums << endl;
	return 0;
}

