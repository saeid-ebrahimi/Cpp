#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	string name=" ";
	int cnt = 0;
	while (!(name == "finish"|| name =="Finish" ))
	{
		cin >> name;
		for (int i = 0; i < name.length(); i++)
		{
			if ((name[i] >= '0') && (name[i] <= '9'))
			{
				cnt++;
				break;
			}
		}
	}
	
	cout << cnt << endl;
	
}

