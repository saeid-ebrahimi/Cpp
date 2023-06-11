#pragma once
#include "Person.h"

class Employee : public Person
{
public:
	Employee() :Person(),_employee_id("[unassigned employee id]"), _base_salary(0){}
	Employee(std::string name, std::string nat_code, std::string employee_id, int age, int base_salary);
	void set_employee_char(std::string name, std::string nat_code, std::string employee_id, int age, int base_salary);
	inline std::string get_employee_id() { return _employee_id; }
	inline int get_base_salary() { return _base_salary; }
	int calc_salary(int hours_worked);
	~Employee(){}

private:
	std::string _employee_id;
	int _base_salary;
};
