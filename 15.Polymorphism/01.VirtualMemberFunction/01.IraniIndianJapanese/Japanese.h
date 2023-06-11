#pragma once
#include "Person.h"
class Japanese
	:public Person
{
public:
	Japanese();
	Japanese(std::string name, std::string nat_code, int age, std::string state_name);
	void set_japanese_char(std::string name, std::string nat_code, int age, std::string state_name);
	void say_hello(const Japanese& ip)const;
	void welcome()const;
	~Japanese();
private:
	std::string _state_name;
};