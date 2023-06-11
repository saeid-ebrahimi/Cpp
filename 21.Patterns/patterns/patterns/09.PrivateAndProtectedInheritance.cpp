// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class members {
public:

	members() {
		public_int = 7;
		protected_int = 9;
		private_int = 15;
	}

	int public_int;
protected:
	int protected_int;
private:
	int private_int;

};
class privateDerived : private members {
public:
	privateDerived() {}

	void printAccess() {
		cout << "Public access " << public_int << " \n";
		cout << "Protected access " << protected_int << " \n";
		//cout << "Private access " << private_int << "\n"; //Compiler error private_int not accessible.

	}
};
class PublicPrivateDrived : public privateDerived {
public:
	void printAccess() {
		//members();
	}
};
class protectedDerived : protected members {
public:
	protectedDerived() {}

	void printAccess() {
		cout << "Public access " << public_int << " \n";
		cout << "Protected access " << protected_int << " \n";
		//cout << "Private access " << private_int << "\n"; //Compiler error private_int not accessible.

	}
};
class externalClass {
public:

	externalClass() {}

	void printAccess() {

		privateDerived prid;
		protectedDerived prod;
		//cout << "Public access " << prid.public_int << " \n";  //Compiler error private_int not accessible.
		//cout << "Protected access " << prid.protected_int << " \n";  //Compiler error private_int not accessible.
		//cout << "Private access " << prid.private_int << "\n"; //Compiler error private_int not accessible.

		//cout << "Public access " << prod.public_int << " \n";  //Compiler error private_int not accessible.
		//cout << "Protected access " << prod.protected_int << " \n";  //Compiler error private_int not accessible.
		//cout << "Private access " << prod.private_int << "\n"; //Compiler error private_int not accessible.

		cout << "No access to derived class private or protected inherited members. \n";

	}
};


int main()
{
	privateDerived prid;
	protectedDerived prod;
	externalClass ec;

	cout << "Private derived class access.\n";
	prid.printAccess();
	cout << " \n\nPublic derived class access.\n";
	prod.printAccess();
	cout << "\n\nExternal class access.\n";
	ec.printAccess();

}