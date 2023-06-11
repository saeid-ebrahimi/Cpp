#pragma once
#include <string>
class Person
{
public:
	Person() :_name("[unassigned name]"), _nat_code("[unassigned national code]"), _age(-1) {};
	Person(std::string name, std::string nat_code, int age);
	inline std::string get_name() { return _name; }
	inline std::string get_nat_code() { return _nat_code; }
	inline int get_age() { return _age; }
	void set_person_char(std::string name, std::string nat_code, int age);
	void print_person_char();
	~Person() {};
protected:
	int _age;
private:
	std::string _name;
	std::string _nat_code;
	

};

