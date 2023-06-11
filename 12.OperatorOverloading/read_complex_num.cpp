#include "stdafx.h"
#include<iostream>
#include <string>

using std::cout;
using std::endl;
int main() {
	std::string str = "-5-6i";
	//std::string str = "-5+6i";
	//std::string str = "+5+6i";
	//std::string str = "+5-6i";
	//std::string str = "5+6i";
	bool neg = false;
	if (str.find('-') == 0)
	{
		str = str.substr(1);
		neg = true;
	}

	if (str.find('+') == 0)
	{
		str = str.substr(1);
		cout << str;
	}
	int i_position = str.find('i');
	int pos_position = str.find("+");
	int neg_position = str.find("-");
	int x;
	int y;
	if (pos_position > 0)
	{
		x = std::stoi(str.substr(0, pos_position));
		y = std::stoi(str.substr(pos_position, i_position));
	}
	if (neg_position > 0)
	{
		x = std::stoi(str.substr(0, neg_position));
		y = std::stoi(str.substr(neg_position, i_position));
	}
	if (neg)
		x *= -1;
	cout << std::noshowpos;
	cout << x << y << "i" <<endl;
}