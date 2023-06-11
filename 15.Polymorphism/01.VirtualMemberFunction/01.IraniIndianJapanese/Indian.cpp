#include "stdafx.h"
#include "Indian.h"
#include <iostream>
Indian::Indian():Person(),_state_name("[unassigned state name]"){}

Indian::Indian(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string state_name = "[unassigned state name]")
{
	set_indian_char(name, nat_code, age,state_name);
}

void Indian::set_indian_char(std::string name, std::string nat_code = "[unassigned national code]",
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

void Indian::say_hello(const Indian & ip) const
{
	std::cout << "namaste " << ip.get_name() << std::endl;
}

void Indian::welcome(std::string s) const
{
	std::cout << "Pressing palms together..." << s << std::endl;
}

Indian::~Indian(){}
