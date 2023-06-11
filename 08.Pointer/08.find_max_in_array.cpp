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

double findMax(double* arr, int size) 
{
	if (arr[0] != NULL)
	{
		double max = arr[0];
		for (int i = 1; i < size; i++, arr++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		return max;
	}
	else
		return NULL;
	
}
int main()
{
	const int arrSize = 10;
	double arr[arrSize] = { 1,2,3,4,0.5,0.06,0.7,1.8,9.5,1.36 };
	double *pArr = arr;
	cout << findMax(pArr, arrSize) << endl;
	
	return 0;
}
