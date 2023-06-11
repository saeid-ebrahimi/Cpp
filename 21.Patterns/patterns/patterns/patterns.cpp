#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class vendingMachine1 {
public:

	vendingMachine1() {
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

	int Sold() {
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

//Adaptor interface.
class machineInterface {
public:
	virtual ~machineInterface() {}
	virtual vector<string> getNames() = 0;
	virtual vector<int> getSoldItems() = 0;
};
class machineWrap : public machineInterface {

public:

	//machineWrap() {}

	vector<string> getNames() {
		vnames.clear();
		vnames.push_back(v1.myName());
		vnames.push_back(v2.name());
		vnames.push_back(v3.getName());
		return vnames;
	}

	vector<int> getSoldItems() {
		vsales.clear();
		vsales.push_back(v1.itemsSold());
		vsales.push_back(v2.Sold());
		vsales.push_back(v3.getItemsSold());
		return vsales;
	}

private:
	vendingMachine1 v1;
	vendingMachine2 v2;
	vendingMachine3 v3;
	vector<string> vnames;
	vector<int> vsales;
};
int main(int argc, char* argv[]) {

	machineWrap mw;


	vector<string> mn = mw.getNames();
	vector<int> ms = mw.getSoldItems();
	cout << "Vending machine names and amount of sales are.\n";

	vector<int>::iterator salesit = ms.begin();

	for (vector<string>::iterator it = mn.begin(); it != mn.end(); it++) {
		cout << (*it).c_str() << "  has sales " << *salesit << "\n";
		salesit++;
	}

	cout << "\n";

	return 0;
}