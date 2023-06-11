

//in following code we want to check if entered number is prime and armestrong

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool is_int_num(string in_data);
int read_data();
void is_prime(int in_num);
void is_armestrong(int in_num);
int main()
{
	int number = read_data();
	is_prime(number);
	is_armestrong(number);


}

bool is_int_num(string in_data)
{
	for (int i = 0; i < unsigned(in_data.length()) ; i++)
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
void is_prime(int num)
{
	if ( num == 1)
		cout << "it's not a Prime num!!" << endl;
	else if (num >= 2)
	{

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				cout << "it's not a Prime num!!" << endl;
				return;
			}
			else
				continue;
		}
		cout << "it's a prime num!!" << endl;
		return;
	}
	else
	{
		cout << "invalid number!!" << endl;
		return;
	}
}
void is_armestrong(int num)
{
	if (num >= 0)
	{
		int temp = num;
		int sum_of_cubes = 0;
		do
		{
			sum_of_cubes += int(pow(temp % 10, 3));
			temp /= 10;
		} while (temp > 0);
		if (sum_of_cubes == num)
		{
			cout << "it's Armestrong number!" << endl;
			return;
		}
		else
			cout << "it's not a Armestrong number!!" << endl;
			
	}
	else
		cout << "invalid number!!" << endl;
}