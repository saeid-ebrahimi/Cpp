#include "stdafx.h"
#include<iostream>
#include <string>
#include "Person.h"
#include "InternationalPerson.h"

using std::cout;
using std::endl;


int main()
{
	//Person p("ali", "2258891415", 24); //error
	//Person p;	//error
	InternationalPerson p;
	p.set_international_person("ahmad", "1545986565", 30, "Irani");
	InternationalPerson p2("Kachi", "1569988984", 25, "Indian");
	p.say_hello(p2);
	p.welcome();
	p2.say_hello(p);
	p2.welcome();

	
}