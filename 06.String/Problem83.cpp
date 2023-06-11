#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	string name;
	cin >> name;
	string newName = name;
	int cnt = 0;
	for (int i = 0; i < name.length(); i++)
	{
		char ch = name[i];
		if (ch != 'a')
		{
			newName[cnt] = ch;
			cnt++;
		}
			
	}
	for (int i = cnt; i < name.length(); i++)
	{
		newName[i] = NULL;
	}
	
	cout <<newName<< endl;


}

