#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "Irani.h"
#include "Japanese.h"
#include "Indian.h"
using std::cout;
using std::endl;


int main()
{
	
	int x = 19;
	x <<= 2;  
	cout << x << std::hex <<endl; 
	Person p("ali", "2258891415", 24);

	Indian inp;
	Irani irp;
	Japanese jp;
	p.welcome();
	jp.welcome();
	irp.welcome();
	inp.welcome();
	
}