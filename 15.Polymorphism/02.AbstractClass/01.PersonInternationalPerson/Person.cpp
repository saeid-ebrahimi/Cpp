#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person() :_name("[unassigned name]"), _nat_code("[unassigned national code]"), _age(-1) {}

Person::Person(std::string name, std::string nat_code="[unassigned national code]", int age = -1)
{
	set_person_char(name, nat_code, age);
}

Person::~Person() {};

void Person::set_person_char(std::string name, std::string nat_code = "[unassigned national code]", int age = -1)
{
	if (name != "")
		_name = name;
	else
	{
		std::cout << "invalid name!" << std::endl;
		_name = "[unassigned name]";
	}
	if (nat_code != "")
		_nat_code = nat_code;
	else
	{
		std::cout << "invalid national code!" << std::endl;
		_nat_code = "[unassigned national code]";
	}
	if (age >= 0)
		_age = age;
	else
	{
		std::cout << "invalid age!" << std::endl;
		_age = -1;
	}
}

void Person::print_person_char()const
{
	std::cout << "person name: " << _name << std::endl;
	std::cout << "person national code: " << _nat_code << std::endl;
	std::cout << "person age: " << _age << std::endl;
}
