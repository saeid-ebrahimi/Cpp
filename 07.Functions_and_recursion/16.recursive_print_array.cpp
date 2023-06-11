

//in following code we want to find odd and even numbers
#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

//void test_program();
int read_data();
bool is_int_num(string in_data);

void rec_print_array(int number[], const int len);
int main()
{
	//test_program();
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		num[i] = read_data();
	}
	rec_print_array(num , 10);
	cout << endl;
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

int recursive_gcd(int num1, int num2)
{
	if (num2 % num1 == 0)
		return num1;
	else
	{
		return recursive_gcd(num2 % num1, num1);
	}
}
void rec_print_array(int number[], const int len)
{
	
	cout << number[len - 1] << "  ";
	if (len == 1)
		return;
	return rec_print_array(number, len - 1); 
}