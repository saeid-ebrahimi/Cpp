


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

int rec_fact(int n);
int main()
{
	//test_program();

	int num = read_data();
	int result = rec_fact(num);
	if (result >= 1)
		cout << result;
	else
		cout << "invalid input";
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
int rec_fact(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else if (num >= 2)
		return num * rec_fact(num - 1);
	else
		return -1;
}