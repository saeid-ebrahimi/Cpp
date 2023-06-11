#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	/*
	ofstream outfile1;
	outfile1.open("outfile1.bin",std::ios_base::binary);
	ofstream outfile2("data.dat",std::ios_base::binary | std::ios_base::app);
	if (outfile1.is_open()) {
		outfile1 << 1727 << endl;
		outfile1 << 0x56f5b2 << endl;
		outfile1 << "the current data is not valid!" << endl;
		outfile1.close();
	}
	else {
		cerr << "cannot open desired file!" << endl;
	}

	if (outfile2.is_open())
	{
		outfile2 << "valid data!" << endl;
		outfile2 << "saved information in 0x5766f7a7b" << endl;
		outfile2 << 421653 << endl;
		outfile2 << 762.634 << endl;
	}
	else
	{
		cerr << "cannot open the desired file!" << endl;
	}
	*/
	cout <<int('t') << '\t' << std::hex <<int('t') << endl;
	return 1;
}