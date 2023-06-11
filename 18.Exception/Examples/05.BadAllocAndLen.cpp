// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
void say_hello(string name)
{
	cout << "hello " << name << endl;
}
int main()
{
	try
	{
		int len;
		cin >> len;
		if (len < 0)
			throw length_error("length of vector cannot be less than 0");
		else {
			vector<int> nums(len, 6);
			cout << nums[0] << endl;
		}

		int size;
		cin >> size;
		if (size < 0)
		{
			throw bad_alloc();
		}
		else 
			int* nums = new int(size);
	}
	catch (bad_alloc& ball)
	{
		cout << ball.what() << " exception occured!" << endl;
	}
	catch (length_error& le)
	{
		cout << le.what() << endl;
	}
    return 0;
}

