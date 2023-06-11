#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;
void main()
{
	std::ifstream input_file("inputFile.dat");
	std::ofstream output_file("outputFile.dat");
	std::fstream io_file("IOFile.dat");

	input_file.~basic_ifstream();
	cout << typeid(input_file).name() << endl;
	output_file.close();
	io_file.~basic_fstream();
}