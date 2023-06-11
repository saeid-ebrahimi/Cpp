#include "stdafx.h"
#include "InternationalPerson.h"
#include <iostream>

InternationalPerson::InternationalPerson():Person(),_nationality("[unassigned nationality]"){}
InternationalPerson::InternationalPerson(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string nationality= "[unassigned nationality]")
{
	set_international_person(name, nat_code, age, nationality);
}
void InternationalPerson::set_international_person(std::string name, std::string nat_code = "[unassigned national code]",
	int age = -1, std::string nationality = "[unassigned nationality]")
{
	set_person_char(name, nat_code, age);
	if (nationality != "")
		_nationality = nationality;
	else
	{
		_nationality = "[unassigned nationality]";
		std::cout << "invalid nationality!!" << std::endl;
	}
}
void InternationalPerson::print_international_person_char()
{
	print_person_char();
	std::cout << "person nationality: " << _nationality << std::endl;
}
void InternationalPerson::say_hello(const Person& p)const
{
	if (_nationality == "Irani")
		std::cout << "salam ";
	else if (_nationality == "Indian")
		std::cout << "namaste ";
	else if (_nationality == "Japanese")
		std::cout << "Kon'nichiwa ";
	else
		std::cout << "Hello ";
	std::cout << p.get_name() << std::endl;
}
void InternationalPerson::welcome()const
{
	if (_nationality == "Irani")
		std::cout << "Handshaking..." << std::endl;
	else if (_nationality == "Indian")
		std::cout << "Pressing palms together... " << std::endl;
	else if (_nationality == "Japanese")
		std::cout << "Bowing..." << std::endl;
	else
		std::cout << "Handshaking..." << std::endl;
}
InternationalPerson::~InternationalPerson(){}