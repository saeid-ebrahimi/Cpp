#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int num;
	int fact = 1;
	int cnt = 1;
	cout << " please enter an number greater than -1 : ";
	cin >> num;
	if (num >= 0)
		while (cnt <= num) 
		{
			fact *= cnt;
			cnt++;
		}
	else
		cout << "please enter an number greater than -1 !" << endl;
	cout << "factorial of inserted number is : " << fact << endl;
	return 0;
}

