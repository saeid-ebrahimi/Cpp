#include "stdafx.h"
#include "Employee.h"
#include <iostream>
Employee::Employee(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id="[unassigned employee id]", int age = -1, int base_salary = 0)
{
	set_employee_char(name, nat_code, employee_id, age, base_salary);

}

void Employee::set_employee_char(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id = "[unassigned employee id]", int age = -1, int base_salary = 0)
{
	set_person_char(name, nat_code, age);
	if (employee_id != "")
		_employee_id = employee_id;
	else
	{
		std::cout << "invalid student id!" << std::endl;
		_employee_id = "[unassigned employee id]";
	}
	if (base_salary >= 0)
		_base_salary = base_salary;
	else
	{
		std::cout << "invalid base salary!" << std::endl;
		_base_salary = 0;
	}
}

int Employee::calc_salary(int hours_worked)
{
	int hourly_payment = _base_salary / 240;
	return _base_salary + hourly_payment*(hours_worked-240)*1.4;
}
