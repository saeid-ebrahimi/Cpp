#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

#define MYNATIVE_INTEGER 1
typedef long int mynative_integer;

#define MYNATIVE_DOUBLE 2

typedef long double mynative_double;

template<class T> struct my_traits; //Generic version

template<>
struct my_traits<int>
{
	enum { TypeId = MYNATIVE_INTEGER };
	typedef mynative_integer MyNativeType;

	static void Cast(MyNativeType from, int& to)
	{
		cout << "MyNativeIntegerType Convert \n";
		to = static_cast<int>(from);
	}

};

template<>
struct my_traits<double> 
{
	enum{TypeId = MYNATIVE_DOUBLE};
	typedef mynative_double MyNativeType;
	static void Cast(MyNativeType from, double& to) {
		cout << "MyNativeDoubleType Converst \n";
		to = static_cast<double>(from);
	}
};

int main() {
	cout << "my_traits<int> typeid is " << my_traits<int>::TypeId << endl;

	mynative_integer mni = 6;
	int intresult;
	my_traits<int>::Cast(mni, intresult);

	cout << endl;

	cout << "my_traits<double> typeid is " << my_traits<double>::TypeId << endl;
	mynative_double mnd = 6.666;
	double doubleresult;

	my_traits<double>::Cast(mnd, doubleresult);

	cout << endl;

	return 0;
}