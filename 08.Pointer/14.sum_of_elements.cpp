


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

int main()
{
	//test_program();

	int num[5];
	for (int i = 0; i < 5; i++)
	{
		num[i] = read_data();
	}
	int* num1 = num;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *num1;
		num1++;
	}
	
	cout << sum << endl;
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
