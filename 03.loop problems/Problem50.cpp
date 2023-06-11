#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double num;
	double mult=1.0;
	int cnt = 0;
	cout << "enter base number : ";
	cin >> num;
	cout << endl << "enter exponential num: (it just use integer part of input): ";
	cin >> cnt;
	if (cnt > 0)
		for (int i = 0; i < cnt; i++)
			mult *= num;
	else if (cnt < 0)
		for (int i = 0; i > cnt; i--)
			mult /= num;
	else
		mult = 1;
	
	cout << "base^exponential is :" << mult << endl;
	return 0;
}

