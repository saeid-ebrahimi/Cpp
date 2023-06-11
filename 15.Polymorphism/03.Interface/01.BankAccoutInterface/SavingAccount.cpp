
#include "stdafx.h"
#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount(double initialBalance, double interestRate)
:BankAccount(initialBalance), intrestRate(interestRate), frozen(false)
{}

SavingAccount::~SavingAccount()
{}

void SavingAccount::earnInterest()
{
	if (!frozen)
	{
		double interest = balance * (intrestRate / 100);
		deposit(interest);
	}
}

void SavingAccount::deposit(double amount)
{
	if (!frozen)
	{
		BankAccount::deposit(amount);
		log("Deposit : " + std::to_string(amount));
	}
}

void SavingAccount::withdraw(double amount)
{
	if (!frozen && amount <=balance)
	{
		BankAccount::withdraw(amount);
		log("withdrawl : " + std::to_string(amount));
	}
}

std::string SavingAccount::getTermsAndConditions()
{
	return "This is a saving account. You cannot gi overdrawn.You earn interest. ";
}

double SavingAccount::getGauranteedLimit()
{
	return 75000;
}

void SavingAccount::freeze()
{
	frozen = true;
}

void SavingAccount::unfreeze()
{
	frozen = false;
}

void SavingAccount::log(const std::string & message) const
{
	std::cout << message << std::endl;
}
