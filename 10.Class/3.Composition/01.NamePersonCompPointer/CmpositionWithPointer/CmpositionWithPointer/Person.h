#pragma once
// Composition - Pointer Version
// Person.h

class Name;

class Person {
	Name* name{ nullptr }; // pointer
	int age;
public:
	Person(const char*, int);
	Person(const Person&);
	Person& operator=(const Person&);
	~Person();
	void display() const;
	void set(const char*);
	//...
};