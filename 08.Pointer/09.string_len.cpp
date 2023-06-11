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
int strLength(char * ch)
{
	return strlen(ch);
}
int strLength2(char* ch)
{
	int cnt = 0;
	while (*ch != NULL)
	{
		ch++;
		cnt++;
	}
	return cnt;
}
int main()
{
	string name = "ahmadreza";
	char* n = &name[0];
	cout << strLength2(n) << endl;
}
