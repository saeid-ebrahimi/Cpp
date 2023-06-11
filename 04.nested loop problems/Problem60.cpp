#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for (int i = 10; i <= 35; i++)
	{
		for (int j = 0; j <10; j++)
		{
			cout << " ";
		}
		for (int j = 10; j <= i; j++)
		{
			cout << "*";
		}
		
		cout << endl;
	}
}

