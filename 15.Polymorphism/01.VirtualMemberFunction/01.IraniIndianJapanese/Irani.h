#pragma once
#include "Person.h"
class Irani
	:public Person
{
public:
	Irani();
	Irani(std::string name, std::string nat_code, int age, std::string state_name);
	void set_irani_char(std::string name, std::string nat_code, int age, std::string state_name);
	void say_hello(const Irani& ip)const;
	void welcome()const;
	~Irani();
private:
	std::string _state_name;
};