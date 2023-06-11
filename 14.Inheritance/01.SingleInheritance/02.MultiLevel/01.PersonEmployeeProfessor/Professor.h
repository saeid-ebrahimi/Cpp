#pragma once
#include "Employee.h"
class Professor : public Employee
{
public:
	Professor() :Employee(), _units_taught(0) {}
	Professor(std::string name, std::string nat_code, std::string employee_id,
			  int age, int base_salary,int units_taught);
	void set_professor_char(std::string name, std::string nat_code, std::string employee_id,
		int age, int base_salary, int units_taught);
	inline int get_units_taught() { return _units_taught; }
	int calc_salary(int worked_hours);
	~Professor() {}
private:
	int _units_taught;
};