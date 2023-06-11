#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int num;
	cout << "Enter an Integer Number : ";
	cin >> num;
	if (num >= 1)
	{
		int cnt = 1;
		while (cnt <= num)
		{
			cout << cnt << endl;
			cnt++;
		}
	}
	else
		cout << " Enter an number greater than 0" << endl;
	return 0;
}

