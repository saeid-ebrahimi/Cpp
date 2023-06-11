#include "stdafx.h"
#include "Student.h"
#include <iostream>
Student::Student(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string student_id= "[unassigned student id]", int age=-1)
{
	set_student_char(name, nat_code, student_id, age);
}

void Student::set_student_char(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string student_id = "[unassigned student id]", int age = -1)
{
	set_person_char(name, nat_code, age);
	if (student_id != "")
		_student_id = student_id;
	else
	{
		std::cout << "invalid student id!" << std::endl;
		_student_id = "[unassigned student id]";
	}

}
