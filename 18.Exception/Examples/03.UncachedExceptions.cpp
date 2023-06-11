// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main()
{
	try
	{
		//throw 203;
		throw bad_alloc();
	}
	catch (int exc)
	{
		cout << "int " << to_string(exc) << " exception occured!" << endl;
	}
	catch (double exc)
	{
		cout << "double " << to_string(exc) << " exception occured!" << endl;
	}
	catch (bad_alloc exc)
	{
		cout << exc.what() << " exception occured!" << endl;
	}
	catch (...)
	{
		cout << "other type of exception occured!" << endl;
	}
	try
	{
		throw 12.5;
	}
	catch (int exc)
	{
		cout << "int " << to_string(exc) << " exception occured!" << endl;
	}
	catch (double exc)
	{
		cout << "double " << to_string(exc) << " exception occured!" << endl;
	}
	catch (bad_alloc exc)
	{
		cout << exc.what() << " exception occured!" << endl;
	}
	catch (...)
	{
		cout << "other type of exception occured!" << endl;
	}
	try
	{
		throw bad_alloc();
	}
	catch (int exc)
	{
		cout << "int " << to_string(exc) << " exception occured!" << endl;
	}
	catch (double exc)
	{
		cout << "double " << to_string(exc) << " exception occured!" << endl;
	}
	catch (bad_alloc exc)
	{
		cout << exc.what() << " exception occured!" << endl;
	}
	catch (...)
	{
		cout << "other type of exception occured!" << endl;
	}
	try
	{
		throw true;
	}
	catch (int exc)
	{
		cout << "int " << to_string(exc) << " exception occured!" << endl;
	}
	catch (double exc)
	{
		cout << "double " << to_string(exc) << " exception occured!" << endl;
	}
	catch (bad_alloc exc)
	{
		cout << exc.what() << " exception occured!" << endl;
	}
	catch (...)
	{
		cout << "other type of exception occured!" << endl;
	}
    return 0;
}

