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
	for (int i = name.length()-1; i >= 0; i--)
	{
		cout << name[i];
	}
	cout << endl;
	

}

