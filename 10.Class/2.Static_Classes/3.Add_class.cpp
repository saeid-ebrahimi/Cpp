
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

static class Add
{
public:
	Add();
	Add(string, string);
	~Add() {};
	void set_nums(string ,string);
	static string calcAdd();
	static string calcAdd(string, string);
private:
	static string _num1;
	static string _num2;
};
string Add::_num1 = "0";
string Add::_num2 = "0";
Add::Add()
{
	_num1 = "0";
	_num2 = "0";
}
Add::Add(string num1, string num2)
{
	set_nums(num1, num2);
}
bool is_valid(string num)
{
	for (int i = 0; i < num.size(); i++)
	{
		if ('0' <= num[i] && '9' >= num[i])
			continue;
		else
			return false;
	}
	return true;
}
string Add::calcAdd()
{
	string add;
	int len1 = _num1.length();
	int len2 = _num2.length();
	
	if (len1 > len2)
	{
		add = _num1;
		int idx = len1 - 1;
		for (int i = len2 - 1; i >= 0; i--,idx--)
		{
			add[idx] += _num2[i] - 48;
			if (add[idx] > '9')
			{
				add[idx] -= 10;
				add[idx - 1]++;
			}
		}
	}
	else if (len1 < len2)
	{
		add = _num2;
		int idx = len2 - 1;
		for (int i = len1 - 1 ; i >= 0; i--, idx--)
		{
			add[idx] += _num1[i] - 48;
			if (add[idx] > '9')
			{
				add[idx] -= 10;
				add[idx - 1]++;
			}
		}
	}
	else
	{
		add = "0";
		add.append(_num1);
		for (int i = len2 - 1; i >= 0; i--)
		{
			add[i+1] += _num2[i] - 48;
			if (add[i+1] > '9')
			{
				add[i+1] -= 10;
				add[i]++;
			}
		}
	}

	return add;
}
string Add::calcAdd(string num1, string num2)
{
	return Add(num1, num2).calcAdd();
}
void Add::set_nums(string num1, string num2)
{
	if (is_valid(num1) && is_valid(num2))
	{
		_num1 = num1;
		_num2 = num2;
	}
	else
	{
		cout << "invalid numbers" << endl;
		_num1 = "0";
		_num2 = "0";
	}
}
int main()
{
	string num1, num2;
	cin >> num1;
	cin >> num2;
	cout << Add::calcAdd(num1, num2);
	

}