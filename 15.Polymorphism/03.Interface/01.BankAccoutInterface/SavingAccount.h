#pragma once 
#include "BankAccount.h"
#include "Freezable.h"
#include "loggable.h"

#include <list>

class SavingAccount : public BankAccount, public freezable, public loggable
{
private : 
	double intrestRate;
	bool frozen; // flag
public :
	SavingAccount(double initialBalance, double intrestRate = 0.0);
	virtual ~SavingAccount();
	void earnInterest();

	//overriden functions from BankAccount class
	virtual void deposit(double amount);
	virtual void withdraw(double amount);

	// override Pure virtual functions from BankAccount class
	virtual std::string getTermsAndConditions();
	virtual double getGauranteedLimit();

	// override  Pure virtual functions from freeazable class
	virtual void freeze();
	virtual void unfreeze();

	//override   Pure virtual functions from loggable class
	virtual void log(const std::string & message) const;
	
};