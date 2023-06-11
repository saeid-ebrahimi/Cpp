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
	char c = 'T', d = 'S';
	char* p1 = &c;
	char* p2 = &d;
	char* p3;
	p3 = &d;
	cout << &p3 << "\t" <<&d <<"\t"<< p3 <<"\t" << *p3 << endl;
	cout << (p3 == p2) << endl;
	p3 = p1;
	cout << p3 << "\t" << *p3 << "\t" << p1 << endl;
	cout << p3 <<'\t'<< p1<<endl;
	*p3 = *p2;
	cout << *p3 << "\t" << *p2  <<'\t'<< *p1<< endl;
	c+=5;
	cout << *p1 << "\t" <<c << "\t" << *p3 << "\t" << *p2 << endl;

	return 0;
}
