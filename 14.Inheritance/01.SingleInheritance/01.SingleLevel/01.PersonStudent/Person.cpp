#include "stdafx.h"

#include <iostream>

#include "Person.h"

Person::Person()
			:name("Unknown name"), age(0)
{
	std::cout << "Hello from Person::Person() " << std::endl;
	
}
Person::Person(const std::string &name, int age)
: name(name), age(age)
{
	std::cout << "Hello from Person::Person(const std::string & name ,int age) " << std::endl;

}
void Person::displayNameAge() const
{
	std::cout << name << " , " << age << std::endl;
}

