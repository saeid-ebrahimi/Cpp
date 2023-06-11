#include "stdafx.h"
#include "Student.h"
#include <iostream>
Student::Student(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string student_id= "[unassigned student id]", int age=-1,
	std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]", double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false,
	std::string hair_color = "[unassigned hair color]", double hand_length = -1)
{
	set_student_char(name, nat_code, student_id, age,
		species, eye_size, eye_color, body_size, skin_color,
		brain_size, tail_length, leg_length, fur, hair, hair_color, hand_length);
}

void Student::set_student_char(std::string name, std::string nat_code = "[unassigned national code]"
	, std::string student_id = "[unassigned student id]", int age = -1, 
	std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]", double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false,
	std::string hair_color = "[unassigned hair color]", double hand_length = -1)
{
	set_human_char(species, eye_size, eye_color, body_size, skin_color,
		brain_size, tail_length, leg_length, fur, hair, hair_color, hand_length);
	set_person_char(name, nat_code, age);
	if (student_id != "")
		_student_id = student_id;
	else
	{
		std::cout << "invalid student id!" << std::endl;
		_student_id = "[unassigned student id]";
	}

}

void Student::print_student_char()
{
	print_person_char();
	std::cout << "person student id: " << std::endl;
	print_human_char();
}
