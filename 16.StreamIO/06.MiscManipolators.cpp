#include "stdafx.h"
#include <iostream>
#include <string>

void main()
{
	int x = 11.5;
	int y = 13.2;
	int z = 15.6;
	std::cout << std::noshowpoint << 115.65 << std::endl;
	std::cout << 12.5 << std::endl;

	std::cout << std::showpoint << 25.6 << std::endl;
	std::cout << 14.36 << std::endl;
	
	std::cout <<std::noshowpoint<< 13.56 << std::endl;

	std::cout << std::showpos << 12.6 << std::endl;
	std::cout << 6.5 << std::endl;

	std::cout << std::noshowpos << 13.7 << std::endl;
	std::cout << 18 << std::endl;

	std::cout << std::showbase;
	std::cout << 230 << std::endl;
	std::cout << std::oct << 230 << std::endl;
	std::cout << std::hex << 230 << std::endl;
	std::cout << 505 << std::endl;

	std::cout << std::noshowbase;
	std::cout << std::hex;
	std::cout << 2564 << std::endl;
	std::cout << std::uppercase;
	std::cout << 2564 << std::endl;
	std::cout << std::nouppercase;
	std::cout << 2564 << std::endl;




}