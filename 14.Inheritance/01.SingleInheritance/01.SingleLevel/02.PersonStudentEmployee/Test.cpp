#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Employee.h"
#include "Student.h"
#include "Employee.h"

using std::cout;
using std::endl;


int main()
{
	Student s1("saeid", "0123456789", "9330014", 21);
	Student s2;
	s2.set_student_char("ali", "2282003987", "9329903", 20);
	Employee e1;
	Employee e2("Reza", "1234567890", "803389", 35, 10000000);
	cout << e1.get_name() << endl;
	e1.set_employee_char("Mehdi", "2881765485", "859907",30, 5000000);
	cout << e1.get_name() << endl;
	cout << e2.get_name() << endl;

	

}