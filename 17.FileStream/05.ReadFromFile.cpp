#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void main()
{
	std::string line1 = " ";
	std::vector<std::string> lines;
	std::fstream inFile("outFile.txt", std::ios::in);
	if (inFile.is_open())
	{
		while (true)
		{
		std::getline(inFile, line1);
		if (line1 == "")
			break;
		lines.push_back(line1);
		}
		inFile.close();
	}
	else
		std::cerr << "cannot open outFile.txt for first time" << std::endl;

	for (int i = 0; i < lines.size(); i++)
	{
		std::cout << lines[i] << std::endl;
	}


}