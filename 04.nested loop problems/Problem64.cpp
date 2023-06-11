#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int prime;
	for (int i = 2; i < num; i++)
	{
		for (int cnt = 2; cnt <= i ; cnt++)
		{
			if (i % cnt == 0)
			{
				if (cnt == i)
				{
					if(num % cnt == 0)
						cout << cnt << "  ";
				}
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

