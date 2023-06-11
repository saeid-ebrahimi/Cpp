#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;

class MyBase {};
class MyDerived : public MyBase {};
class UnRelated {};
int main() {

	MyBase* mb = new MyBase();
	MyDerived* md = new MyDerived();
	cout << "The type of mb is " << typeid(mb).name() << endl;
	cout << "The type of md is " << typeid(md).name() << endl;
	//Cast MyBase to MyDerived, Not safe as MyDerived can contain
	//members not in MyBase.
	MyDerived* md2 = static_cast<MyDerived*>(mb);
	//Cast MyDerived to MyBase, Safe as MyDerived Contains MyBase
	//public members from inheritance.
	MyBase* mb2 = static_cast<MyBase*>(md);
	cout << "The type of mb2 is " << typeid(mb2).name() << endl;
	cout << "The type of md2 is " << typeid(md2).name() << endl;
	UnRelated* urc = new UnRelated();
	//Possibly unsafe cast.
	//MyBase* rcast = static_cast<MyBase*>(urc);
	//Cleanup
	delete mb;
	delete md;
	int myint = 5;
	delete urc;
	cout << "The type of myint is " << typeid(myint).name() << "with value " << myint << endl;
	//Cast int to double, safe as precision of double is greater.

	double mydouble = static_cast<double>(myint);
	printf("The type of mydouble is %s with value %f\n",typeid(mydouble).name(),mydouble);
		
	//Dynamic cast	
	MyDerived* md3 = new MyDerived();
	MyBase* mb3 = dynamic_cast<MyBase*>(md3);
	cout << "The type of md3 is " << typeid(mb3).name() << endl;
	//MyDerived* md4 = dynamic_cast<MyDerived*>(mb3);
	//clean up
	delete md3;
	 
	//Const cast
	const int myconst = 5;
	volatile int myvolatile = 9;
	int* nonconst = const_cast<int*>(&myconst);
	int* nonvolatile = const_cast<int*>(&myvolatile);
	//Can't print typeid's of const and volatile.


	//Reinterpret cast.
	MyBase* mb4 = new MyBase();
	UnRelated* urc2 = new UnRelated();
	//Possibly unsafe cast.
	MyBase* rcast = reinterpret_cast<MyBase*>(urc2);
	cout << "The type of rcast is " << typeid(rcast).name() << endl;
	//cleanup
	delete mb4;
	delete urc;
	return 0;
}