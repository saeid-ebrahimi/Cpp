
#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

static class Exp
{
public:
	Exp() { _exponent = 0; _base = 1; };
	Exp(int , int);
	static long long int calcExp();
	static long long int calcExp(int , int);
	~Exp();

private:
	static int _exponent;
	static int _base;

};
int Exp::_exponent = 0;
int Exp::_base = 1;
Exp::Exp(int exp, int base = 10)
{
	_exponent = exp;
	_base = base;
}
Exp::~Exp()
{
}
long long int Exp::calcExp()
{
	int exp = 1;
	for (int i = 0; i < _exponent; i++)
	{
		exp *= _base;
	}
	return exp;
}
long long int Exp::calcExp(int exp, int base)
{
	int exponent = 1;
	for (int i = 0; i < exp ; i++)
	{
		exponent *= base;
	}
	return exponent;
}
int main()
{
	cout << Exp(3,10).calcExp() << endl;
	cout << Exp::calcExp(4,10) << endl;
}