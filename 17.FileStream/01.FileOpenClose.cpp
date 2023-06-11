#include "stdafx.h"
#include <iostream>
#include <fstream>


void main()
{
	std::ifstream input_file;
	std::ofstream output_file;
	std::fstream io_file("IOFile.dat");

	input_file.open("inputFile.dat");
	std::cout << input_file.is_open() << std::endl;
	output_file.open("outputFile.dat");
	std::cout << output_file.is_open() << std::endl;
	std::cout << io_file.is_open() << std::endl;


	input_file.close();
	output_file.close();
	io_file.close();
}