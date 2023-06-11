// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class A
{
public:
	inline void printName() { cout << "A\n"; }

};
class B : public A {
};

class C : public A {};

class CB : public B, public C {};

// virtual inheritance and virtual base class
class D : public virtual A {};

class F : virtual public A {};

class DF : public D, public F {};

int main(int argc, char* argv[]) {

	CB cb;
	//cb.printName();  //Compiler error ambigous printName

	DF df;
	df.printName();

	return 0;
}