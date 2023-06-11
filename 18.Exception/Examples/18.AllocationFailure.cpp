#include "stdafx.h"
#include <string>
#include <iostream>
#include <new>
using namespace std;
int main()
{
	try {
		while (true) {
			int* intarray = new int[99999ul];
		}
	}
	catch (const std::bad_alloc& e) {
		cout << "bad_alloc caught: " << e.what() << endl;
	}
	return 0;
}