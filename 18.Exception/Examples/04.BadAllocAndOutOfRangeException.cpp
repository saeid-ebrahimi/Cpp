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
		int* num = new int(1400000000002000000);
		cout << *num << endl;
	}
	catch (bad_alloc& ball)
	{
		cout << ball.what() << "exception occured!" << endl;
	}

	try
	{
		int arr[4] = { 13, 24, 18, 56 };
		vector<string> names(4, "[unassigned]");
		int idx;
		cout << "enter a index please: ";
		cin >> idx;
		if (idx >= 4) {

			throw bad_alloc();
			throw out_of_range("index exceeded!");
		}
		else
		{
			cout << arr[idx] << endl;
			cout << names[idx] << endl;
		}
		
	}
	catch (const out_of_range& exc)
	{
		cout << exc.what() << endl;
	}
    return 0;
}

