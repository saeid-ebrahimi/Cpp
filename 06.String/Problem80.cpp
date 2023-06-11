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
	cin >> ch;
	int cnt = 0;
	int cnt1=0;
	for (int i = 0; name[i] != NULL; i++)
	{
		if (name[i] == ch)
			cnt++;
	}
	for (int i = 0; i < name.length(); i++)
	{
		if (name[i] == ch)
			cnt1++;
	}
	cout << cnt <<"\t"<<cnt1 << endl;

}

