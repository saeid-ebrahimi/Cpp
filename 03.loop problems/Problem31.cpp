#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	int posetiveNumCnt=0;
	int cnt = 1;
	while (cnt <= 100)
	{
		cout << "enter num" << cnt << " : ";
		cin >> num;
		if (num > 0.0)
		{
			posetiveNumCnt++;
		}
		cnt++;
		cout << endl;
	}
	cout << "Num of posetive nums is :  " << posetiveNumCnt << endl;
	return 0;
}

