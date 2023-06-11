#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int num;
	int denominator_counter=0;
	cout << "Enter an Integer Number : ";
	cin >> num;
	if (num >= 1)
	{
		int cnt = 1;
		while (cnt <= num)
		{
			if (num % cnt == 0)
				denominator_counter++;
			
			cnt++;
		}
		cout << denominator_counter << endl;
	}
	else
		cout << " Enter an number greater than 0" << endl;
	return 0;
}

