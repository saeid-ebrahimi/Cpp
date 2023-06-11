// PureVirtualFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SavingAccount.h"
#include <iostream>

void freezeMe(freezable & f)
{
	f.freeze();
}
int _tmain(int argc, _TCHAR* argv[])
{
	SavingAccount acc(1000, 2.5);

	std::cout << "Terms and conditions : " << acc.getTermsAndConditions() << std::endl;
	std::cout << "Guarantee limit : " << acc.getGauranteedLimit() << std::endl;

	acc.deposit(100);
	acc.deposit(200);
	acc.withdraw(50);
	acc.earnInterest();

	freezeMe(acc);

	acc.deposit(1000);
	acc.deposit(2000);
	acc.withdraw(5000);
	acc.earnInterest();

	acc.unfreeze();
	acc.deposit(10000);
	acc.deposit(20000);
	acc.withdraw(5000);
	acc.earnInterest();

	return 0;
}

