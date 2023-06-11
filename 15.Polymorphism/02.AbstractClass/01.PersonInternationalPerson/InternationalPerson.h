#pragma once
#include "Person.h"

class InternationalPerson
	: public Person
{
public:
	InternationalPerson();
	InternationalPerson(std::string name, std::string nat_code, int age,std::string nationality);
	void set_international_person(std::string name, std::string nat_code, int age, std::string nationality);
	void print_international_person_char();
	void say_hello(const Person& p)const ;
	void welcome()const;
	~InternationalPerson();

private:
	std::string _nationality;
};