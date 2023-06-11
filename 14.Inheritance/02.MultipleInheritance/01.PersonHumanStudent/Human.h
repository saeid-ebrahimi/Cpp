#pragma once
#include "Mammal.h"
#include <string>

class Human
	:public Mammals
{
public:
	Human();
	Human(std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght,
		bool fur, bool hair, std::string hair_color, double hand_length);
	void set_human_char(std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght,
		bool fur, bool hair, std::string hair_color, double hand_length);
	void print_human_char();
	~Human();

private:
	std::string _hair_color;
	double _hand_length;
};
