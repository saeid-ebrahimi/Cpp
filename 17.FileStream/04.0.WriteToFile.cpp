#include "stdafx.h"
#include <iostream>
#include <fstream>


void main()
{
	std::ofstream outFile("outFile.txt");
	if (outFile.is_open())
	{
		outFile << "Here is line1 " << std::endl;
		outFile << "Here is line2 " << std::endl;
		outFile << "Here is line3 " << std::endl;
		outFile.close();
		std::cout << "first time writing finished!!" << std::endl;
	}
	else
		std::cerr << "cannot open outFile.txt for first time" << std::endl;
	outFile.open("outFile.txt", std::ios_base::app);
	if (outFile.is_open())
	{
		outFile << "auther name is saeid" << std::endl;
		outFile << "Hello from saeid" << std::endl;
		outFile.close();
		std::cout << "second time writing finished!!" << std::endl;
	}
	else
		std::cerr << "cannot open outFile.txt for second time" << std::endl;



}