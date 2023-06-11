#include "stdafx.h"
#include <iostream>

using namespace std;

class Balance
{
public:
	Balance() : _balance(0) {}
	Balance(double initial_balance);
	Balance& operator+=(double deposit);
	Balance& operator-=(double withdraw);
	double get_balance() { return _balance; }
	~Balance();

private:
	double _balance;
};

Balance::Balance(double initial_balance)
{
	if(initial_balance > 0)
		_balance = initial_balance;
	else
	{
		cout << "invalid initial balance amount!" << endl;
		_balance = 0;
	}
}
Balance& Balance::operator+=(double deposit)
{
	_balance += deposit;
	return *this;
}
Balance& Balance::operator-=(double withdraw)
{
	_balance -= withdraw;
	return *this;
}
Balance::~Balance()
{
}
int main()
{
	Balance b1;
	Balance b2(10.6);
	b1 += 10;
	b1 += 150;
	b1 -= 100;
	cout << b1.get_balance() << endl;
	cout << (b2 -= 5).get_balance() << endl;
	return 0;
}