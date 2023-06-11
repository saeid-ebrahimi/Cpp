

//in following code we want to check if entered number is a even or odd!

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_int_num(string in_data);
int read_data();
void is_even(int in_num);
int main()
{
	is_even(read_data());
}

bool is_int_num(string in_data)
{
	for (int i = 0; i < in_data.length() ; i++)
	{
		char in = in_data[i];
		if (in <= '9' && in >= '0')
			continue;
		else
		{
			return false;						
		}
			
	}
	return true;
}
int read_data()
{
	string in_num;
	cout << "Enter an integer number : " << endl;
	cin >> in_num;
	if (is_int_num(in_num))
		return std::stoi(in_num);
	return -1;
}
void is_even(int in_num)
{
	if (in_num >= 0)
	{
		if (in_num % 2 == 0)
			cout << "it's an even number!!" << endl;
		else
			cout << "it's an odd number!!" << endl;
	}
	else
	{
		cout << "invalid input entered!!" << endl;
	}
	
}