

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
int recursive_pow(int base, int exp);
int main()
{
	test_program();
	int base = read_data();
	int exp = read_data();
	cout << base << " pow "<< exp << " is: " << recursive_pow(base, exp)<<endl;	
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
int recursive_pow(int base, int exp)
{
	if (exp < 0)
	{
		return 0;
	}
	else if (exp == 0)
		return 1;
	else if (exp == 1)
		return base;
	else
		return base * recursive_pow(base ,exp - 1);
}