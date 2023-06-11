#pragma once
#include <string>
class Person
{
public:
	Person();
	Person(std::string name, std::string nat_code, int age);
	inline std::string get_name()const { return _name; }
	inline std::string get_nat_code() const{ return _nat_code; }
	inline int get_age()const { return _age; }
	void set_person_char(std::string name, std::string nat_code, int age);
	void print_person_char()const;
	virtual void say_hello(const Person& p)const ;
	virtual void welcome()const;
	~Person();
private:
	std::string _name;
	std::string _nat_code;
	int _age;
	
	

};

