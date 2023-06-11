#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Student.h"
#include "Professor.h"

using std::cout;
using std::endl;


int main()
{
	Student s1("Saeid", "0123456789", "9330014", 21);
	Student s2;
	s2.set_student_char("ali", "2282003987", "9329903", 20);
	Professor p1;
	Professor p2("Reza", "1234567890", "803389", 35, 10000000,12);
	cout << p1.get_name() << endl;
	p1.set_professor_char("Mehdi", "2881765485", "859907",30, 5000000,16);
	cout << p1.get_name() << endl;
	cout << p1.calc_salary(300) << endl;
	cout << p2.get_name() << endl;
	cout << p2.calc_salary(260) << endl;
	Employee e1("Ahmad", "1234567890", "803389", 35, 10000000);
	cout << e1.get_name() << endl;
	cout << e1.calc_salary() << endl;
	

}