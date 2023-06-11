#include "stdafx.h"
#include "Person.h"
Person::Person(string n, int d, int m, int y, int h,int min , int s) :bdate(d, m, y,h,min,s)
{
	if (n == "")
		abort();
	else
		name = n;
}
void Person::set_person(string n, int d, int m, int y, int h, int min, int s)
{
	if (n == "")
		abort();
	else
		name = n;
	bdate.set_date(d,m,y,h, min, s);
}