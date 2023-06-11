// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>

using namespace std;
class DerivedException :public exception
{
	virtual const char* what() const throw() {
		return "my derived exception!!";
	}
} myderivedexception;
int main()
{
	try
	{
		throw myderivedexception;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
    return 0;
}

