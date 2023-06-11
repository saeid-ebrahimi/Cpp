#pragma once
#include "Person.h"
class Indian
	:public Person
{
public:
	Indian();
	Indian(std::string name, std::string nat_code, int age, std::string state_name);
	void set_indian_char(std::string name, std::string nat_code, int age,std::string state_name);
	void say_hello(const Indian& ip)const;
	void welcome(std::string s="")const;
	~Indian();
private:
	std::string _state_name;
};