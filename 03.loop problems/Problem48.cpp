#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double x;
	int stuCnt;
	int ans=0;
	cout << "enter number of students :";
	cin >> stuCnt;
	if(stuCnt >= 1)
	{
		int cnt = 1;
		cout << "enter mean of students: ";
		do
		{
			
			cin >> x;
			if (x >= 0 && x <= 20) {
				if (x >= 10 && x <= 15)
					ans++;
				cnt++;
			}
			else
				cout << "invalid input for mean" << endl;
		} while (cnt <= stuCnt);
			cout << ans << endl;
	}
	else
	{
		cout << "Invalid input for num of students." << endl;
	}
	return 0;
}

