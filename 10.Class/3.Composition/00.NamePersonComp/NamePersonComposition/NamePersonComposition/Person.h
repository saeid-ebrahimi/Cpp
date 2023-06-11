#pragma once
// Composition - SubObject Version
// Person.h
#include "Name.h"

class Person {
	Name name; // subobject
	int age;
public:
	Person(const char*, int);



	void display() const;
	void set(const char*);
	//...
};