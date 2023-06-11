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
	double input;
	double* pInput = &input;
	double& rInput = input;
	cin >> input;
	cout << pInput << "\t" << *pInput << "\t" << rInput << endl;
	return 0;
}
