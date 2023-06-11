


#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;



int main()
{
	int arr[5] = { 5,6,8,1,4 };
	int* arr_ptr = arr;
	for (int  i = 4; i >= 0; i--)
	{
		cout << *(arr_ptr + i) << " ";
	}
	cout << endl;
}
