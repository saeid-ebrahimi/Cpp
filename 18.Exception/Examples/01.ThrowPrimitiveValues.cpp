// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	try {
		cout << "Throwing Exception... " << endl;
		throw 25; 
	}
	catch (int num)
	{
		cout << to_string(num) << "  " << "int exception catched!" << endl;
	}
	try {
		cout << "Throwing Exception..." << endl;
		throw 46.46f;
	}
	catch (double)
	{
		cout << "double exception catched!" << endl;
	}
	catch (float) {
		cout << "float exception catched!" << endl;
	}
    return 0;
}

