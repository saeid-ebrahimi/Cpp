#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> //necessary for parameterized manipulators

typedef std::basic_istream<char> istream;
typedef std::basic_ostream<char> ostream;

void main()
{
	std::cout << -30.453 << std::endl;
	std::cout << std::setw(11) << -12.453 << std::endl;
	std::cout << -10.453 << std::endl;

	std::cout <<std::left << std::setw(11) << -12.453 << std::endl;
	std::cout << std::setw(10) << -12.4536 << std::endl;

	std::cout << std::right << std::setw(10) << -125.689 << std::endl;
	std::cout << std::setw(10) << -11.4536 << std::endl;

	std::cout << std::internal << std::setw(9) << -1.4536 << std::endl;
	std::cout << std::setw(10) << -11.536 << std::endl;
	std::cout << std::setw(10) << +1.536 << std::endl;
}