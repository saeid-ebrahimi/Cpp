#pragma once
#include "Animal.h"
class Vertebrates :
	public Animal
{
public:
	Vertebrates();
	Vertebrates(std::string species, double eye_size, std::string eye_color,
		double body_size, std::string skin_color, double brain_size, double tail_length);
	void set_vertebrates_char(std::string species, double eye_size, std::string eye_color,
		double body_size, std::string skin_color, double brain_size, double tail_length);
	void print_vertebrates_char();
	~Vertebrates();
private:
	double _brain_size;
	double _tail_length;
};

