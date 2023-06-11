

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

int recursive_lcm1(int num1, int num2, int lcm = 1);
int recursive_lcm2(int num1, int num2);
int main()
{
	//test_program();
	int num1 = read_data();
	int num2 = read_data();
	if (num2 >= num1)
	{
		cout << recursive_lcm1(num1, num2) << endl;
		cout << recursive_lcm2(num1, num2) << endl;
	}
	else
	{
		cout << recursive_lcm1(num2, num1) << endl;
		cout << recursive_lcm2(num2, num1) << endl;
	}
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
int recursive_lcm1(int num1, int num2 , int lcm )
{
	
	if ((lcm  % num1 == 0) &&( lcm % num2 == 0))
		return lcm;
	else
		return recursive_lcm1(num1, num2, ++lcm);

}
int recursive_lcm2(int num1, int num2)
{
	static int lcm = 0;
	lcm += num2;
	if (lcm  % num1 == 0 )
		return lcm;
	else
		return recursive_lcm2(num1, num2);
}