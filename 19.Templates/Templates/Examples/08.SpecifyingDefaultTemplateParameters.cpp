#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<typename A=int, typename B=double, int anint=5>
void printParams(A ain, B bdouble)
{
	cout << "Arguments are A is type " << typeid(ain).name() << "with value " << ain;
	cout << " B type is " << typeid(bdouble).name() << " with value " << bdouble;
	cout << " anint is " << anint << endl;
}

template<class C, typename A= int, typename B = double , int anint =5>
class MyClass
{
public:
	MyClass(C myc, A ain, B adouble)
	{
		cout << "myClass constructor parameters myc is type "
			<< typeid(myc).name() << " with value " << myc 
			<< " anint type is " << typeid(ain).name() << " with value " << ain
			<<" adouble type is " << typeid(adouble).name() << " with value "  << adouble
			<< " anint type is " << typeid(anint).name() << "with value " << anint <<endl;
	}

	~MyClass()
	{
	}

};

int main() {
	printParams(99, 3.35);
	cout << endl;

	int testint = 18;
	MyClass<int>(testint, 66, 66.66);
	cout << endl;

	return 0;
}