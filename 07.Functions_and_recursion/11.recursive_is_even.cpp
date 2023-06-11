

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
void recursive_is_even(int min_num, int max_num);
int main()
{
	test_program();
	/*
	int min_num = read_data();
	int max_num = read_data();
	if (min_num < max_num)
		recursive_is_even(min_num, max_num);
	else
		cout << "invalid input!!" << endl; 
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
void recursive_is_even(int min_num, int max_num)
{
	if (max_num == min_num)
	{
		if (max_num % 2 == 0)
			cout << max_num << " is even!!" << endl;
		else
			cout << max_num << " is odd!!" << endl;
		return;
	}
		
	else
	{
		if (max_num % 2 == 0)
			cout << max_num << " is even!!" << endl;
		else
			cout << max_num << " is odd!!" << endl;
		return recursive_is_even(min_num, max_num - 1);
	}
		
}