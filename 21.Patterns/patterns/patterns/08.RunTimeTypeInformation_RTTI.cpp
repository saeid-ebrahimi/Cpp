// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class BaseClass {};
class DerivedClass : public BaseClass {};

int main()
{
	BaseClass bc;
	DerivedClass dc;
	BaseClass* ptr_bc;
	DerivedClass* ptr_dc = &dc;
	//dynamic cast
	//ptr_bc = dynamic_cast<BaseClass *> (&dc);
	ptr_bc = dynamic_cast<BaseClass*> (ptr_dc); // if we cannot cast it results NULL
	
	if (ptr_bc) { //bool(ptr_bc);
		cout << "dynamic_cast completed successfully. \n";
	}

	//Using typeid and type_info struct field name.
	cout << typeid(bc).name() << " " << typeid(dc).name() << "\n" 
		<< typeid(ptr_bc).name() << " " << typeid(ptr_dc).name() << endl;
	
}