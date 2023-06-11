#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int month;
	cout << "Please Enter Month number :" << endl
	cin >> month;
	if (month >= 1 && month <= 12)
		if (month >= 7)
			cout << "30 days" << endl;
		else
			cout << "31 days" << endl;
	else
		cout << "Invalid Month " << endl;
	return 0;
}

