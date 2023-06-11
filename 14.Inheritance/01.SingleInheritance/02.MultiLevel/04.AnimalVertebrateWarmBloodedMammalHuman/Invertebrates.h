#pragma once
#include <string>

class Invertebrates
	:public Animal
{
public:
	Invertebrates();
	Invertebrates(std::string species, double eye_size, std::string eye_color
		, double body_size, std::string skin_color, double skin_hardness);
	void set_Invertebrates_char(std::string species, double eye_size, std::string eye_color
		, double body_size, std::string skin_color, double skin_hardness);
	void print_Invertebrates_char();
	~Invertebrates();

private:
	double _skin_hardness;

};
