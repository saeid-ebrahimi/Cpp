#include "stdafx.h"
#include "Japanese.h"
#include <iostream>
Japanese::Japanese() : Person(), _state_name("[unassigned state name]") {}

Japanese::Japanese(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string state_name = "[unassigned state name]")
{
	set_japanese_char(name, nat_code, age, state_name);
}

void Japanese::set_japanese_char(std::string name, std::string nat_code, int age, std::string state_name)
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

void Japanese::say_hello(const Japanese & ip) const
{
	std::cout << "Kon'nichiwa "<< ip.get_name() << std::endl;
}

void Japanese::welcome() const
{
	std::cout << "bowing..." << std::endl;
}

Japanese::~Japanese(){}
