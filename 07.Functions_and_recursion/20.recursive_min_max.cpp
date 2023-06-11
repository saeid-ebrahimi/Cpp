


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

int rec_min(int num[], int len);
int rec_max(int num[], int len, int max = 0);
int main()
{
	//test_program();

	int num[10];
	for (int i = 0; i < 5; i++)
	{
		num[i] = read_data();
	}
	
	int min = rec_min(num,5);
	int max = rec_max(num, 5);
	cout << min << endl << max << endl;
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
int rec_min(int num[],int len )
{
	static int min = num[len-1];
	if (len == 0)
		return min;
	if (num[len - 1] < min)
		min = num[len - 1];
	return rec_min(num, len - 1);
}
int rec_max(int num[], int len , int max)
{
	if (len == 0)
		return max;
	if (num[len - 1] > max)
		max = num[len - 1];
	return rec_max(num, len-1 , max);
}
