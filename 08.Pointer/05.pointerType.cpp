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
	char blocks[3] = { 'A','B','C' };
	char* ptr = &blocks[0];
	cout << ptr << "   ";
	char* ptr2 = blocks;
	cout << ptr2 << endl;
	char temp;

	temp = blocks[0];
	cout << temp << "\t";
	temp = *(blocks + 2);
	cout << temp << "\t";
	temp = *(ptr + 1);
	cout << temp << "\t";
	temp = *ptr;
	cout << temp << endl;
	
	ptr = blocks + 1;
	cout << ptr << "\t";
	temp = *ptr;
	cout << temp << "\t";
	temp = *(ptr + 1);
	cout << temp << endl;

	ptr = blocks;
	cout << ptr << "\t";
	temp = *++ptr;
	cout << temp << "\t";
	temp = ++*ptr;
	cout << temp << "\t";
	temp = *ptr++;
	cout << temp << "\t";
	temp = *ptr;
	cout << temp << endl;

	return 0;
}
