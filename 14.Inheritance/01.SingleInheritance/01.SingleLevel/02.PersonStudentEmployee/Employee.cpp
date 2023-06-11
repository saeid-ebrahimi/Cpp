#include "stdafx.h"
#include "Employee.h"
#include <iostream>
Employee::Employee(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id="[unassigned employee id]", int age = -1, int salary = 0)
{
	set_employee_char(name, nat_code, employee_id, age, salary);

}

void Employee::set_employee_char(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string employee_id = "[unassigned employee id]", int age = -1, int salary = 0)
{
	set_person_char(name, nat_code, age);
	if (employee_id != "")
		_employee_id = employee_id;
	else
	{
		std::cout << "invalid student id!" << std::endl;
		_employee_id = "[unassigned employee id]";
	}
	if (salary >= 0)
		_salary = salary;
	else
	{
		std::cout << "invalid salary!" << std::endl;
		_salary = 0;
	}
}
