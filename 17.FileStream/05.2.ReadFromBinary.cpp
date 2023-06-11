#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {

	ifstream infile1("outfile1.bin", std::ios_base::binary);
	cout << infile1.iword(2) << endl;
	return 1;
}