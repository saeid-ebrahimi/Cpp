// NamePersonComposition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"

int main() {
	Person p("Harvey", 23);
	Person q = p;
	p.display();
	q.display();
	q.set("Lawrence");
	p.display();
	q.display();
	p = q;
	p.display();
}