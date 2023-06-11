

//in following code we want to find prime numbers
#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

void test_program();
int read_data();
bool is_int_num(string in_data);
void prime_numbers(int min_num,int max_num);
void is_prime(int num);
int main()
{
	int min_num = read_data();
	int max_num = read_data();
	prime_numbers(min_num, max_num);
	test_program();
	
}
bool is_int_num(string in_data)
{
	for (int i = 0; i < unsigned(in_data.length()); i++)
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
void prime_numbers(int min_num, int max_num)
{
	if (min_num < max_num)
	{
		for (int i = min_num; i < max_num; i++)
		{
			is_prime(i);
		}
	}
	else
		cout << "invalid_input!" << endl;
	return;
}
void is_prime(int num)
{
	if (num == 1)
		return;
	else if (num >= 2)
	{

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)	
				return;
			else
				continue;
		}
		cout << num << endl;
		return;
	}
	else
	{
		cout << "invalid number!!" << endl;
		return;
	}
}