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
	char str[] = "A string";
	char* pStr = str;
	char& rStr = *str;

	cout << pStr << "\t" << str << "\t" << &rStr << "\t";
	cout << *pStr << "\t" << pStr[0];
	cout << "\t" << rStr << "\t" << str[0] << endl;
	pStr++;
	cout << pStr << "\t" << *pStr << "\t" << rStr << "\t" << str<< endl;
	cout << str[3] << "\t" << pStr[2] << endl;
	pStr += 3;
	cout << pStr << "\t" <<str << endl;
	return 0;
}
