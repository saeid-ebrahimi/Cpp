

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
int recursive_sum(int min_num, int max_num);
int main()
{
	test_program();
	
	int min_num = read_data();
	int max_num = read_data();
	if (min_num < max_num)
		cout <<"sum of nums in given range is:"<< recursive_sum(min_num, max_num) << endl;
	else
		cout << "invalid input!!" << endl; 
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
int recursive_sum(int min_num, int max_num)
{
	if (min_num == max_num)
	{
		return min_num;
	}
	else
	{
		return min_num + recursive_sum(min_num + 1, max_num);
	}
}