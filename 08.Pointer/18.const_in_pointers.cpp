
#include "stdafx.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	int a = 125;
	const int c1 = 11; // constant int
	int const c2 = 20; // constant int

	const int* constant1; //pointer to const int
	constant1 = &c1;
	constant1 = &c2;
	constant1 = &a;

	int const* constant3; //pointer to const int
	constant3 = &c1;
	constant3 = &c2;
	constant3 = &a;
	
	int* const constant2 = &a; //const pointer to int
	//int* const constant2 = &c2; // error
	//int* const constant2 = &c1; // error
	



}