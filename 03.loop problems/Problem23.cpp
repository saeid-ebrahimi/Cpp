#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int num1 , num2;
	
	cout << "Enter two Integer Number : ";
	cin >> num1 >> num2;
	if (num1 >= 1 && num2 >= 1)
	{
		int cnt = 1;
		int min_num = num1 > num2 ? num2 : num1;
		while (cnt <= min_num)
		{
			if (num1 % cnt == 0 && num2 % cnt == 0)
				cout << cnt << "  ";
			cnt++;
		}
		cout << endl;
	}
	else
		cout << " Enter greater than 0 numbers" << endl;
	return 0;
}

