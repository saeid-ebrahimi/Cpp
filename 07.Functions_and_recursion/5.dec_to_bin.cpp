

//in following code we want to convert entered number in decimal to binary

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
bool is_decimal_num(string in_data);
double read_data();
long long dec_to_bin(int num);
int main()
{
	test_program();

	/*
	int number = read_data();
	cout << dec_to_bin(number) << endl;	
	*/
}

bool is_decimal_num(string in_data)
{
	for (int i = 0; i < unsigned(in_data.length()) ; i++)
	{
		char in = in_data[i];
		if (in <= '9' && in >= '0')
			continue;
		else
			return false;								
	}
	return true;
}
double read_data()
{
	string in_num;
	cout << "Enter a decimal number : " << endl;
	cin >> in_num;
	if (is_decimal_num(in_num))
		return std::stoi(in_num);
	return -1;
}

long long dec_to_bin(int num)
{
	if (num >= 0)
	{
		long long bin_num = 0;
		int coeff = 1;
		do
		{
			bin_num += (num % 2)*coeff;
			num /= 2;
			coeff *= 10;
		} while (num > 0);
		return bin_num;
	}
	else
	{
		cout << "invalid number" << endl;
		return -1;
	}
}
