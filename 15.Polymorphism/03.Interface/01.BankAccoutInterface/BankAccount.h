#pragma once

#include <string>

class BankAccount
{
protected:
	double balance;
public:
	BankAccount(double initialBalance);

	virtual ~BankAccount();

	double getBalance() const;
	//overriden functions
	virtual void deposit(double amount);
	virtual void withdraw(double amount);
	//Pure virtual functions
	virtual std::string getTermsAndConditions() = 0;
	virtual double getGauranteedLimit() = 0;

};
