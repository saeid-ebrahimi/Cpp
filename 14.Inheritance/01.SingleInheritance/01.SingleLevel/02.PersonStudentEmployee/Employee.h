#pragma once
#include "Person.h"

class Employee : public Person
{
public:
	Employee() :Person(),_employee_id("[unassigned employee id]"), _salary(0){}
	Employee(std::string name, std::string nat_code, std::string employee_id, int age, int salary);
	void set_employee_char(std::string name, std::string nat_code, std::string employee_id, int age, int salary);
	inline std::string get_employee_id() { return _employee_id; }
	inline int get_salary() { return _salary; }
	~Employee(){}

private:
	std::string _employee_id;
	int _salary;
};
