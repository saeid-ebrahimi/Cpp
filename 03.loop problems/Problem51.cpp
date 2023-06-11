#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int sum = 0;
	for (int i = 10; i < 100; i++)
	{
		sum = (i % 10) + (i / 10);
		if (i % sum == 0)
			cout << i << endl;
	}
	return 0;
}

