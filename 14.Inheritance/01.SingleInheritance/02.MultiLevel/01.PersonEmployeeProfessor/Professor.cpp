#include "stdafx.h"
#include "Professor.h"
#include <iostream>
Professor::Professor(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id = "[unassigned employee id]", int age = -1, int base_salary = 0, int units_taught = 0)
{
	set_professor_char(name, nat_code, employee_id, age, base_salary, units_taught);
}

void Professor::set_professor_char(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id = "[unassigned employee id]", int age = -1, int base_salary = 0, int units_taught = 0)
{
	set_employee_char(name,nat_code,employee_id,age,base_salary);
	if (units_taught >= 0)
		_units_taught = units_taught;
	else
	{
		_units_taught = 0;
		std::cout << "invalid units taught!!" << std::endl;
	}
}

int Professor::calc_salary(int worked_hours)
{
	int extra_units = _units_taught - 10;
	return Employee::calc_salary(worked_hours) + extra_units * 100000;
}
