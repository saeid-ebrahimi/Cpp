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

int main()
{
	char s[10] = "abcde";
	char* cptr;
	 
	cptr = &s[4];
	while (*cptr != s[-1] )
	{
		cout << *cptr << "\t";
		cptr--;
	}
	return 0;
}
