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
	int numOfInputs;
	cout << "number of inputs :" << endl;
	cin >> numOfInputs;
	double values[20];
	for (int i = 0; i < numOfInputs; i++)
	{
		cout << "value of input number #" << (i + 1) << endl;
		cin >> values[i];
	}
	double max = 0.0;
	double* pMax = &max;
	double& rMax = max;
	for (int i = 0; i < numOfInputs; i++)
	{
		if (values[i] > max)
			max = values[i];
	}
	cout << *pMax  << "\t" << rMax << endl;
	return 0;
}
