#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip> //necessary for parameterized manipulators

typedef std::basic_istream<char> istream;
typedef std::basic_ostream<char> ostream;

void main()
{
	double pi = 30.14159265358979;

	std::cout << pi << std::endl;

	std::cout << std::setprecision(10) << pi << std::endl;
	std::cout << pi << std::endl;
	std::cout << std::setprecision(5);

	//to obtain fixed format 
	std::cout << std::setprecision(7);
	std::cout << std::fixed << pi << std::endl;
	std::cout << std::setprecision(5);

	//to obtain scientific format 
	std::cout << std::scientific << pi << std::endl;
	std::cout << std::setprecision(8);
	std::cout << std::scientific << pi << std::endl;
	std::cout << std::setprecision(5);

	//to obtain general format 
	std::cout.unsetf(std::ios::fixed | std::ios::scientific);


}