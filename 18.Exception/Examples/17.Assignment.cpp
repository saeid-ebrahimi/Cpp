#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class MyDeepClass {
public:
	//Constructor
	MyDeepClass(int x, char cc, std::string ss, int* intp);
	//Deep copy constructor
	MyDeepClass(const MyDeepClass &other);
	//Assignment operator
	MyDeepClass& operator = (const MyDeepClass &rhs);
	//Print function.
	void MyDeepClassPrint(); private:
		int x;
		char c;
		std::string s;
		int* intptr;
};

void MyDeepClass::MyDeepClassPrint() {
	cout << x << " " << c << " " << s << " " << *intptr;
}

MyDeepClass::MyDeepClass(int xx, char cc, std::string ss, int* intp)
	:
	x(xx), c(cc), s(ss), intptr(intp) {
	cout << "MyDeepClass constructor called " << endl;
}

MyDeepClass::MyDeepClass(const MyDeepClass &other) :
	x(other.x), c(other.c), s(other.s) {
	//copy intptr memory.
	cout << "MyDeepClass copy constructor called " << endl;
	delete intptr;
	intptr = new int(*other.intptr);
}

MyDeepClass& MyDeepClass::operator = (const MyDeepClass &rhs)
{
	cout << "MyDeepClass operator= called." << endl;
	//Check for self assignment.
	if (this != &rhs)
	{
		x = rhs.x;
		c = rhs.c;
		s = rhs.s;
		delete intptr;
		intptr = new int(*rhs.intptr);
	}
	return *this;
}

class MyShallowClass {
public:
	MyShallowClass(int xx, char cc, std::string
		ss) :x(xx), c(cc), s(ss) {
		cout << "MyShallowClass constructor called." << endl;
	}
	void MyShallowClassPrint() {
		cout << x << " " << c << " " << s;
	}
private:
	int x;
	char c;
	std::string s;
};

int main() {
	int* myint = new int(67);
	int myintx = 55;
	std::string mystring("Hello Deep World");

	MyDeepClass mdc(myintx, 'S', mystring, myint); //Declared Constructor
	MyDeepClass mdcCopy(mdc); //User defined copy constructor

	std::string myShallowString("Hello Shallow World");
	int myShallowIntx = 1111;
	MyShallowClass msc(myShallowIntx, 'Z', myShallowString); //Declared constructor
	MyShallowClass mscCopy(msc); //Compiler generated copy constructor

		
	cout << "MyDeepClass mdc member values are ";
	mdc.MyDeepClassPrint();
	cout << endl;
	cout << "MyDeepClass mdcCopy member values are ";
	mdcCopy.MyDeepClassPrint();
	cout << endl;
	cout << "MyShallowClass msc member values are ";
	msc.MyShallowClassPrint();
	cout << endl;
	cout << "MyShallowClass mscCopy member values are ";
	mscCopy.MyShallowClassPrint();
	cout << endl;

	//Create LHS object.
	int* myassignint = new int(1111);
	int myassignintx = 9999;
	std::string myassignstring("Assignment operator");
	MyDeepClass mdcAssign(myassignintx, 'V', myassignstring,myassignint);
	cout << "MyDeepClass mdcAssign member values before assignment are ";
	mdcAssign.MyDeepClassPrint();
	cout << endl;
	//Call assignment operator.
	mdcAssign = mdc;
	cout << "MyDeepClass mdcAssign member values after assignment are ";
	mdcAssign.MyDeepClassPrint();
	cout << endl;
	return 0;
}