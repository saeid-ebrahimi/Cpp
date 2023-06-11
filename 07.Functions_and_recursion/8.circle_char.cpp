

//in following code we want to find caracteristics of circle

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#define PI 3.14
using std::cin;
using std::cout;
using std::endl;
using std::string;
void test_program();
double read_data();
bool is_float_num(string in_data);
void circle_char(double radius);

int main()
{
	test_program();
	
}
void circle_char(double radius)
{
	cout << "diameter is: " << 2 * radius << endl;
	cout << "circumference is: " << 2 * PI*radius << endl;
	cout << "area is: " << PI*radius*radius<<endl;
}
bool is_float_num(string in_data)
{
	bool flag = false;
	for (int i = 0; i < unsigned(in_data.length()); i++)
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


