#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	int prime;
	for (int num = 1000; num < 10000; num++)
	{
		for (int cnt = 2; cnt <= num ; cnt++)
		{
			if (num % cnt == 0)
			{
				if (cnt == num)
					cout << cnt << "  ";
				else
					break;
			}

		}

	}
	cout << endl;
	/*while (num % cnt )
	{
		cnt++;
		if (cnt == num)
		{
			prime = num;
			cout << prime;
		}
	}*/
	
}

