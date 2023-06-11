#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	string name;
	char ch;
	cin >> name;
	for (int i = 0; i < name.length(); i++)
	{
		char ch = name[i];
		if (ch != 'a')
			cout << name[i];
	}
	cout << endl;


}

