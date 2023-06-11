#include "stdafx.h"
#include "Irani.h"
#include <iostream>
Irani::Irani(): Person(), _state_name("[unassigned state name]"){}

Irani::Irani(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string state_name = "[unassigned state name]")
{
	set_irani_char(name, nat_code, age, state_name);
}

void Irani::set_irani_char(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string state_name = "[unassigned state name]")
{
	set_person_char(name, nat_code, age);
	if (state_name != "")
		_state_name = state_name;
	else
	{
		std::cout << "invalid state name" << std::endl;
		_state_name = "[unassigned state name]";
	}
}

void Irani::say_hello(const Irani & ip) const
{
	std::cout << "salam " << ip.get_name() << std::endl;
}

void Irani::welcome() const
{
	std::cout << "hand shaking..." << std::endl;
}

Irani::~Irani(){}
