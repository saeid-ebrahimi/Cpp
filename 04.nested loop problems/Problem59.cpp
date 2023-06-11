#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 25; i++)
	{
		for (int j = 1; j <= 55; j++)
		{
			if (i + j >= 30 && i+j <= 45)
				cout << "*";
			else
				cout << " ";
		}
		
		cout << endl;
	}
}

