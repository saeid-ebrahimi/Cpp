#pragma once
#include "Person.h"
class Student:public Person
{
public:
	Student():Person(),_student_id("[unassigned student id]"){}
	Student(std::string name, std::string nat_code, std::string student_id, int age);
	inline std::string get_student_id() { return _student_id; }
	void set_student_char(std::string name, std::string nat_code, std::string student_id, int age);
	~Student() {}

private:
	std::string _student_id;
};
