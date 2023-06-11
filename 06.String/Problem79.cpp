#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	string name;
	cin >> name;
	int len = 0;
	while (name[len] != NULL)
	{
		len++;
	}
	cout << name[name.length()-1] << '\t'<<name[len-1] << endl;

}

