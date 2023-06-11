// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class vendingMachine1
{
public:
	vendingMachine1()
	{
		name = "vendingMachine1";
		soldItems = 5;
	}
	string myName() {
		return name;
	}

	int itemsSold() {
		return soldItems;
	}

private:
	string name;
	int soldItems;
};
class vendingMachine2 {
public:

	vendingMachine2() {
		na = "vendingMachine2";
		soldItems = 55;
	}

	string name() {
		return na;
	}

	int sold() {
		return soldItems;
	}

private:
	string na;
	int soldItems;
};
class vendingMachine3 {
public:

	vendingMachine3() {
		name = "vendingMachine3";
		soldItems = 105;
	}

	string getName() {
		return name;
	}

	int getItemsSold() {
		return soldItems;
	}

private:
	string name;
	int soldItems;
};
// Adapter interface.
class machineInterface
{
public:
	virtual ~machineInterface() {}
	virtual vector<string> getNames() = 0;
	virtual vector<int> getSoldItems() = 0;
};

class machineWrap :public machineInterface, public vendingMachine1,
	public vendingMachine2, public vendingMachine3
{
public :
	vector<string> getNames()
	{
		vnames.clear();
		vnames.push_back(vendingMachine1::myName());
		vnames.push_back(vendingMachine2::name());
		vnames.push_back(vendingMachine3::getName());
		return vnames;
	}
	vector<int> getSoldItems() {
		vsales.clear();
		vsales.push_back(vendingMachine1::itemsSold());
		vsales.push_back(vendingMachine2::sold());
		vsales.push_back(vendingMachine3::getItemsSold());
		return vsales;
	}
private:
	vector<string> vnames;
	vector<int> vsales;
};
int main()
{
	machineWrap mw;


	vector<string> mn = mw.getNames();
	vector<int> ms = mw.getSoldItems();
	cout << "Vending machine names and amount of sales are.\n";

	vector<int>::iterator salesit = ms.begin();

	for (vector<string>::iterator it = mn.begin(); it != mn.end(); it++, salesit++) {
		cout << (*it).c_str() << "  has sales " << *salesit << "\n";
	}

	cout << "\n";
}