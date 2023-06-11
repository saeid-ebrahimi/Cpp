

//in following code we want to calculate cube of entered number

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_float_num(string in_data);
double read_data();
double cube_of_num(double num);
int main()
{
	double number = read_data();
	cout << cube_of_num(number) << endl;
	
}

bool is_float_num(string in_data)
{
	bool flag = false;
	for (int i = 0; i < unsigned(in_data.length()) ; i++)
	{
		char in = in_data[i];
		if (in <= '9' && in >= '0')
			continue;
		
		else if (in == '.' && flag == false)
		{
			flag == true;
			continue;
		}
		else
		{
			return false;						
		}
			
	}
	return true;
}
double read_data()
{
	string in_num;
	cout << "Enter an floting point number : " << endl;
	cin >> in_num;
	if (is_float_num(in_num))
		return std::stod(in_num);
	return -1.0;
}

double cube_of_num(double num)
{
	double mult = 1.0;
	for (int i = 0; i < 3; i++)
	{
		mult *= num;
	}
	return mult;
}