#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	int maxlength = 0;
	string maxName;
	string name[PAR];
	for (int i=0; i < PAR; i++)
	{
		cin >> name[i];
	}	

	for (int i = 0; i < PAR; i++)
	{
		int length = name[i].length();
		string pName = name[i];
		if (length > maxlength)
		{
			maxlength = length;
			maxName = pName;
		
		}
	}
	cout << maxName << endl;
}

