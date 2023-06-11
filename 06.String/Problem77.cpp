#include "stdafx.h"
#include <iostream>
#include <string>
#define PAR 10
using namespace std;

int main()
{
	int aliCnt=0;
	int sixCnt=0;
	int kCnt=0;
	string pName;
	string name[PAR];
	for (int i=0; i < PAR; i++)
	{
		cin >> name[i];
	}	

	for (int i = 0; i < PAR; i++)
	{
		if (name[i] == "ali" || name[i] == "Ali")
			aliCnt++;
		if (name[i].length() == 6)
			sixCnt++;
		if (name[i][0] == 'k' || name[i][0] == 'K')
			kCnt++;
	}
	cout << aliCnt << endl << sixCnt << endl << kCnt << endl;
}

