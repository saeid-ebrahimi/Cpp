#include "stdafx.h"
#include <iostream>

#define PAR 30 
using namespace std;

int main()
{
	for (int i = 0; i <= PAR; i++)
	{
		for (int j = 0; j < PAR -i; j++)
		{
			cout << " ";
		}
		for (int j = PAR -i; j <= PAR +i; j++)
		{
			cout << "*";
		}
		for (int j = PAR +i; j < 2*PAR; j++)
		{
			cout << " ";
		}
		
		cout << endl;
	}
}

