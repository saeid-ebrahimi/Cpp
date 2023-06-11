// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
void printTemplateTypeName(T x) {
	cout << "printTemplateTypeName typename parameter " << typeid(x).name() << endl;
}

int main() {
	int myint = 5;
	float myfloat = 7.987654321;
	bool mybool = false;
	double mydouble = 99.9;

	//Temmplate function calls.
	//Specify template function.
	printTemplateTypeName<>(myint);
	printTemplateTypeName<>(myfloat);
	printTemplateTypeName<>(mybool);
	printTemplateTypeName<>(mydouble);

	//Implicit type parametrizing.
	printTemplateTypeName(myint);
	printTemplateTypeName(myfloat);
	printTemplateTypeName(mybool);
	printTemplateTypeName(mydouble);

	//Explicit type parametrizing.
	printTemplateTypeName<int>(myint);
	printTemplateTypeName<float>(myfloat);
	printTemplateTypeName<bool>(mybool);
	printTemplateTypeName<double>(mydouble);

	return 0;
}