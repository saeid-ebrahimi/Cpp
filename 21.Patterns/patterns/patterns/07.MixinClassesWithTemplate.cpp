// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
Mixins are used to combine independent classes that
share the same base class, in C++ this is multiple inheritance.
There are two ways to do this in C++ either using templates or
using the virtual inheritance like we previously looked at
in the virtual base classes. Since we have already seen the
virtual base class example we will look at the template version.
This way of mixin relies on the use of templates to combine the classes
at compile time into a composite object.
*/
class A
{
public:
	inline void printName() { cout << "A\n"; }

};
template<class classType>
class B : public classType
{
public:
	void printName() {
		cout << "class B calling A::printName() \n";
		classType::printName();
	}
};
template<class classType>
class C : public classType
{
public:
	void printName() {
		cout << "class C calling B::printName() \n";
		classType::printName();
	}
};
int main(int argc, char* argv[]) {

	// create mixin class
	C<B<A>> myMixin;
	myMixin.printName();

	return 0;
}