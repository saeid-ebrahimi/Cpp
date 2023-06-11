#pragma once
#include "Person.h"
#include "Human.h"
class Student
	:public Person , public Human
{
public:
	Student():Person(),Human(),_student_id("[unassigned student id]"){}
	Student(std::string name, std::string nat_code, std::string student_id, int age,
		std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght,
		bool fur, bool hair, std::string hair_color, double hand_length);
	inline std::string get_student_id() { return _student_id; }
	void set_student_char(std::string name, std::string nat_code, std::string student_id, int age,
		std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght,
		bool fur, bool hair, std::string hair_color, double hand_length);
	void print_student_char();
	~Student() {}

private:
	std::string _student_id;
};
