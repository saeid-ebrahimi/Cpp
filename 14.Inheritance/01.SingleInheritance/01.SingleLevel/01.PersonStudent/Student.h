#pragma once

#include <string>
#include "Person.h"


class Student:public Person
{
private:
	std::string course;
public:
	Student();
	Student(const std::string & name, int age, const std::string & course);
	void displayCourse() const;
	
};
