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
int countEven(int* arr, int arrSize) {
	int cnt = 0;
	for (int i=0;i<arrSize;i++, arr++)
	{
		if (*arr % 2 == 0)
			cnt++;
		else
			continue;
	}
	return cnt;
}
int main()
{
	const int arrSize = 10;
	int arr[arrSize] = { 1,2,3,4,5,6,7,8,9,10 };
	int *pArr = arr;
	cout << countEven(pArr, arrSize) << endl;
	return 0;
}
