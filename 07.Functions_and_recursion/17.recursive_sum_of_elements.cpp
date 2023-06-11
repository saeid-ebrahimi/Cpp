

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

int rec_sum(int number[], const int len);
int main()
{
	//test_program();
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		num[i] = read_data();
	}
	cout << "sum of elements = " << rec_sum(num , 10);
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
int rec_sum(int num[], int len)
{
	if (len == 1)
	{
		return num[0];
	}
	else
	{
		return num[len - 1] + rec_sum(num, len - 1);
	}
}