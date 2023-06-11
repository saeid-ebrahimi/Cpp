#include "stdafx.h"
#include <iostream>
#include <string>

//typedef std::basic_istream<char> istream;
//typedef std::basic_ostream<char> ostream;

void main()
{
	std::string fullName;
	std::string restName;
	std::cout << "full name: ";
	/*
	std::cin >> fullName >> restName;
	std::cout << fullName << std::endl;
	std::cout << restName << std::endl;
	*/
	std::getline(std::cin, fullName);
	std::cout << fullName << std::endl;
	std::string address;
	std::cout << "address: ";
	std::getline(std::cin, address);
	std::cout << address << std::endl;
	

}