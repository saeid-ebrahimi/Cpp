// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
void updateVector(vector<string>& firstvector_,	vector<string>& secondvector_,string newString)
{
	firstvector_.push_back(newString);
	try {
		secondvector_.push_back(newString);
	}
	catch (...) {
		firstvector_.pop_back(); 
		cout << "second vector update failed." << endl;
	}
}
void updateVector2(std::vector<string>& firstvector_,vector<std::string>& secondvector_,string newString) {
	firstvector_.push_back(newString);
	try {
		bad_alloc excep;
		throw excep;
		secondvector_.push_back(newString);
	}
	catch (...) {
		firstvector_.pop_back();
		cout << "second vector update failed." << endl;
	}
}

int main()
{
	vector<string> firstvector;
	vector<string> secondvector;
	string mystring("Hello world!");

	cout << "Calling updateVector " << endl;
	updateVector(firstvector, secondvector, mystring);

	cout << "first vector size is " << firstvector.size() << endl;
	cout <<"second vector size is " << secondvector.size() << endl;

	cout << "Calling updateVector2 " << endl;
	updateVector2(firstvector, secondvector, mystring);

	cout << "first vector size is " << firstvector.size() << endl
		 << "second vector size is " << secondvector.size() << endl;
	return 0;
}

