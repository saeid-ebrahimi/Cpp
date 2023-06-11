#pragma once
#include "WarmBlooded.h"

class Mammals
	:public WarmBlooded
{
public:
	Mammals();
	Mammals(std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght, bool fur,bool hair);
	void set_mammal_char(std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght, bool fur, bool hair);
	void print_mammal_char();
	~Mammals();

private:
	bool _fur;
	bool _hair;
};

