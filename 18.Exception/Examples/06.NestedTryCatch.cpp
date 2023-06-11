// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;

int main()
{
	try
	{
		int len;
		cout << "length of vector: ";
		cin >> len;
		vector<int> nums(0);
		if (len < 0)
		{
			throw length_error("length of vector cannot be less than 0");
		}
		else
		{
			nums.resize(len);
		}
		try
		{
			int idx;
			cout << "enter the index: ";
			cin >> idx;
			if (idx >= len && idx < 0)
				throw out_of_range("index exceeded vector size");
			else
			{
				int value;
				cout << "enter the value: ";
				cin >> value;
				nums[idx] = value;
				
			}
			cout << nums[idx] << endl;
		}
		catch(out_of_range& or)
		{
			cout << or.what() << endl;
		}
	}
	catch (length_error& le)
	{
		cout << le.what() << endl;
	}
	return 0;
}

