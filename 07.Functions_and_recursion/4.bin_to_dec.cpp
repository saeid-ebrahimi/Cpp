

//in following code we want to convert entered number in binary to decimal

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void test_program();
bool is_binary_num(string in_data);
double read_data();
int binary_to_dec(int num);
int main()
{
	double number = read_data();
	cout << binary_to_dec(number) << endl;	
}

bool is_binary_num(string in_data)
{
	for (int i = 0; i < unsigned(in_data.length()) ; i++)
	{
		char in = in_data[i];
		if (in == '1' || in == '0')
			continue;
		
		else
			return false;								
	}
	return true;
}
double read_data()
{
	string in_num;
	cout << "Enter an binary number : " << endl;
	cin >> in_num;
	if (is_binary_num(in_num))
		return std::stoi(in_num);
	return -1;
}
int binary_to_dec(int num)
{
	if (num >= 0)
	{
		int dec_num = 0;
		int coeff = 1;
		do
		{
			dec_num += (num % 2) * coeff;
			num /= 10;
			coeff *= 2;
		} while (num > 0);
		return dec_num;
	}
	else
	{
		cout << "invalid number!!" << endl;
		return -1;
	}
}