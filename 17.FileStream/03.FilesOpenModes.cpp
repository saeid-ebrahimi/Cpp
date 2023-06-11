#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

void main()
{
	std::ifstream input_file;
	std::ofstream output_file;
	std::fstream io_file;

	bool openMode = std::ios_base::binary | std::ios_base::trunc;
	output_file.open("outputFile.dat",openMode);
	openMode =  std::ios_base::trunc;
	std::ofstream outFile("outFile.txt", openMode);
	if(output_file.is_open())
		output_file.close();

	openMode = std::ios_base::binary | std::ios_base::app;
	output_file.open("outputFile.dat", openMode);
	std::ofstream outFile2("outFile.txt", openMode);
	if (output_file.is_open())
	{
		std::string text = "mash gholam hosein\n be kodakestan miravad";
		outFile.write(text.c_str(),text.length());
		output_file.close();
	}
	else
		std::cerr << "cannot open outputFile.dat" << std::endl;

	input_file.open("inputFile.dat");

	openMode = std::ios_base::in | std::ios_base::out;
	io_file.open("IOFile.dat",openMode);
	if (io_file.is_open())
		io_file.close();
	else
		std::cerr << "cannot open IOFile.dat" << std::endl;
	openMode = std::ios::out | std::ios_base::ate;
	io_file.open("IOFile.dat", openMode);
	if (io_file.is_open())
		io_file.close();


	input_file.close();
	
	io_file.close();
}