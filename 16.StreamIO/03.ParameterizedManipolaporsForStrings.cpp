#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> //necessary for parameterized manipulators

typedef std::basic_istream<char> istream;
typedef std::basic_ostream<char> ostream;

void main()
{
	std::cout << "hello worm!" << std::setw(11) << -12.453 << std::endl;
	char* message = "wibble";

	std::cout << "[" << std::setw(10) << message << "]" << std::endl;
	std::cout << "Hello" << std::endl;

	std::cout << std::left << "[" << std::setw(10) << message << "]" << std::endl;
	std::cout << "[" << std::setw(10) << "hello" << "]" << std::endl;

	std::cout << std::right << "[" << std::setw(10) << message << "]" << std::endl;
	std::cout << "[" << std::setw(10) << "hello" << "]" << std::endl;


}