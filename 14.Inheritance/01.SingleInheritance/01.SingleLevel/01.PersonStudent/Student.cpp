#include "stdafx.h"
#include <iostream>
#include "Student.h"

Student::Student():course("unassigned course")
{
	std::cout << "Hello from Student::Student() " << std::endl;
}
Student::Student(const std::string & name, int age, const std::string & course) : Person(name,age), course(course)
{
	std::cout << "Hello from Student::Student(string , int , string ) " << std::endl;
}
void Student::displayCourse() const
{

	std::cout << course << std::endl;
}