#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double ans;
	double pre=5;
	double ppre=1;
	int n;
	cin >> n;
	if (n == 1)
		ans = 1;
	if (n == 2)
		ans = 5;
	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{

			ans = (pre + ppre) / 2.0;
			ppre = pre;
			pre = ans;
		}
	}
	
	cout << ans <<endl;
	return 0;
}

