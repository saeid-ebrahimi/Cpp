// ClassExamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "func.h"
#include <string>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;
bool strContainCh(char * str, char character)
{
	while (*str != NULL)
	{
		if (*str == character)
			return true;
		str++;
	}
	return false;
}
int main()
{
	string name = "ahmadreza";
	char* n = &name[0];
	char ch = 'd';
	cout << strContainCh(n , ch) << endl;
	return 0;
}
