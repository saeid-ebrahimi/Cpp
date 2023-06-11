// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
class throwException
{
public:
	throwException(int num =0);
	~throwException();

private:
	int number;
};

throwException::throwException(int n)
{
	cout << "throwexception object constructed" << endl;
	number = n;
}

throwException::~throwException()
{
	cout << "throwexception object destructed" << endl;
	throw number;
}
int main()
{
	try
	{
		try
		{
			//throwException throwExc(9);
			throwException* throwExc = new throwException(4);
			cout << "Throwing exception will cause termination of program." << endl;
			//delete throwExc;
			throw 7;
		}
		catch (int ex)
		{
			cout << "Main Exception caught and its number is: " << to_string(ex) << endl;
			throw 99;
		}
	}
	catch (int ex2)
	{
		cout << "destructor exception caught and its number is: " << to_string(ex2) << endl;
	}
	
	return 0;
}

