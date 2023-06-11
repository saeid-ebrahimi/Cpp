#include "stdafx.h"
#include <iostream>
#include <string>

typedef std::basic_istream<char> istream;
typedef std::basic_ostream<char> ostream;

void main()
{
	//endl is the simplest manipulator
	// manipulators are predefined objects that you pass to stream,
	//to obtain the formatting effect you desire
	std::cout << "hello world!" << std::endl;

	int x = 13;
	std::cout << "here is a debug message,the value of x is: " << x << std::flush << std::endl;
	
}