

//in following code we want to find odd and even numbers
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
int recursive_reverse(int num , int coeff );
int main()
{
	test_program();
	/*
	int num = read_data();
	int digit = 1;
	int temp = num;
	while (temp /10 > 0)
	{	
		digit *= 10;
		temp /= 10;
	}
	if (num >= 0)
	{
		cout << recursive_reverse(num, digit);
	}
	else
	{
		cout << "invalid input!!" << endl; 
	}
	*/
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
int recursive_reverse(int num ,int coeff)
{
	if (num / 10 == 0)
	{
		return (num % 10);
	}
		
	else 
	{ 
		return (num % 10)*coeff + recursive_reverse(num / 10,coeff/10);
	}
	
}