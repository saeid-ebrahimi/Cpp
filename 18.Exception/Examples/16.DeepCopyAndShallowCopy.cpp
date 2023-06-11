#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include <string>
#include <iostream>
using namespace std;

class MyDeepClass {
public:
	//Constructor
	MyDeepClass(int x, char cc, std::string ss, int* intp);
	//Deep copy constructor
	//MyDeepClass(const MyDeepClass &other);
	//MyDeepClass(MyDeepClass &other);
	//MyDeepClass(volatile const MyDeepClass &other);
	MyDeepClass(const MyDeepClass &other);
	//Print function.
	void MyDeepClassPrint();
private:
	int x;
	char c; std::string s;
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

MyDeepClass::MyDeepClass(const MyDeepClass &other) :x(other.x), c(other.c), s(other.s) {
	//copy intptr memory.
	cout << "MyDeepClass copy constructor called " << endl;
	intptr = new int(*other.intptr);
}

class MyShallowClass {

public:
	MyShallowClass(int xx, char cc, std::string ss) :x(xx), c(cc), s(ss)
	{
		cout << "MyShallowClass constructor called." << endl;
	}
	void MyShallowClassPrint()
	{
		cout << x << " " << c << " " << s;
	}
private:
	int x;
	char c;
	std::string s;
};
int main() {
	int myint = 67;
	int myintx = 55;
	std::string mystring("Hello Deep World");

	int myShallowIntx = 1111;
	std::string myShallowString("Hello Shallow World");

	MyDeepClass mdc(myintx, 'S', mystring, &myint);
	MyDeepClass mdcCopy(mdc);

	MyShallowClass msc(myShallowIntx, 'Z', myShallowString);
	MyShallowClass mscCopy(msc);

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
	return 0;
}