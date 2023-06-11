// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Normal function 
void printString(string s)
{
	cout << s << endl;
}
//Member function pointer.
class funcPointer
{
public:
	void printString(string s)
	{
		cout << s << endl;
	}
};

//Polymorphism use.
class Base {
public:
	virtual void sayHello() {
		cout << "Hello from Base class. \n";
	}
};

class Derived : public Base {
public:
	void sayHello() {
		cout << "Hello from Derived class. \n";
	}
};

int main()
{
	//int(*f)()
	//int(c::*f)()
	// Standard function pointer example 
	string ss = "Hello World.";

	void(*funcPtr)(string) = &printString;

	(*funcPtr)(ss);

	// Member function pointer example.
	string str = "Hello from memeber function pointer.!!";
	void (funcPointer::*memFuncPtr)(string) = &funcPointer::printString;

	funcPointer fp;
	(fp.*memFuncPtr)(str);
	funcPointer* fp2 = &fp;
	(fp2->*memFuncPtr)(str);

	// Virtual member function example.
	void (Base::*baseFuncPtr)() = &Base::sayHello;
	void (Derived::*derivedFuncPtr)(void) = &Derived::sayHello;
	void (Derived::*derivedFuncPtr2)(void) = &Base::sayHello;
	Base bp;
	Derived dp;
	(bp.*baseFuncPtr)();  //call Base::sayHello
	(dp.*derivedFuncPtr)(); // call Derived::sayHello
	(dp.*baseFuncPtr)(); //call Derived::sayHello using base pointer and derived object. 
	(dp.*derivedFuncPtr2)();



}