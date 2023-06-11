


#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;



int main()
{
	string input_str;
	char* string_ptr;
	string copy_str;
	cout << "Enter an string: ";
	cin >> input_str;
	int length = input_str.length();
	string_ptr = &input_str[0];
	copy_str.resize(length);
	for (int i = 0; i < length; i++ ,string_ptr++)
	{
		copy_str[i] = *string_ptr;
	}
	cout << copy_str;

}
