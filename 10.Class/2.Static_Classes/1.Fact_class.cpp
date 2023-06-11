
#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

static class Fact
{
public:
	Fact();
	Fact(int);
	static long long int calc_fac(int num);
	~Fact();

private:
	int _num;

};

Fact::Fact()
{
	_num = 0;
}
Fact::Fact(int num)
{
	_num = num;
}
Fact::~Fact()
{
}
long long int Fact::calc_fac(int num)
{
	int fact = 1;
	for (int i = 2; i <= num ; i++)
	{
		fact *= i;
	}
	return fact;
}
int main()
{
	cout << Fact::calc_fac(5) << endl;
}