
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<char> char_vec(100, 'A');
	vector<char> ch_vec;
	for (char alph = 'A'; alph <= 'Z'; alph++)
	{
		ch_vec.push_back(alph);
	}

}