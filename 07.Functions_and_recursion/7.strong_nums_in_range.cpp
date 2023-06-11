

//in following code we want to find length of string

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
void test_program();
int read_data();
bool is_decimal_num(string in_data);
void is_strong_num(int in_num);
void strong_nums(int min_num, int max_num);
int fact(int num);
int main()
{
	//test_program();

	int min_number = read_data();
	int max_number = read_data();
	strong_nums(min_number, max_number);
}
bool is_decimal_num(string in_data)
{
	for (int i = 0; i < unsigned(in_data.length()); i++)
	{
		char in = in_data[i];
		if (in <= '9' && in >= '0')
			continue;
		else
			return false;
	}
	return true;
}
int read_data()
{
	string in_num;
	cout << "Enter a decimal number : " << endl;
	cin >> in_num;
	if (is_decimal_num(in_num))
		return std::stoi(in_num);
	return -1;
}
void is_strong_num(int in_num)
{
	int sum = 0;
	int temp = in_num;
	do
	{
		sum += fact(temp % 10);
		temp /= 10;
	} while (temp > 0);
	if (sum == in_num)
		cout << "number #" << in_num << " is a strong num" << endl;
	return;
}
int fact(int num)
{
	if (num == 1 || num == 0)
		return 1;
	else
	{
		int fact = 1;
		for (int i = 2; i <= num; i++)
		{
			fact *= i;
		}
		return fact;
	}
}
void strong_nums(int min_num, int max_num)
{
	if (min_num < max_num)
		for (int i = min_num ; i < max_num; i++)
			is_strong_num(i);
	else
		cout << "invalid input!!" << endl;
	return;
}