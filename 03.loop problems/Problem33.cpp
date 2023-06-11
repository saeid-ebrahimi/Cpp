#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double sumOfPosNums=0.0;
	double sumOfNegNums = 0.0;
	int posNumCnt = 0;
	int negNumCnt = 0;
	int cnt = 1;
	while (cnt <= 5)
	{
		cout << "enter num" << cnt << " : ";
		cin >> num;
		if (num > 0.0)
		{
			sumOfPosNums += num;
			posNumCnt++;
		}
		else if (num < 0.0)
		{
			sumOfNegNums += num;
			negNumCnt++;
		}
		cnt++;
		cout << endl;
	}
	cout << "Mean of posetive nums is :  " << sumOfPosNums/posNumCnt << endl;
	cout << "Mean of negative nums is : " << sumOfNegNums/negNumCnt << endl;
	return 0;
}

