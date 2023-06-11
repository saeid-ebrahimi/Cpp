#pragma once
#include <string>
#include "Vertebrates.h"
class WarmBlooded
	:public Vertebrates
{
public:
	WarmBlooded();
	WarmBlooded(std::string species, double eye_size, std::string eye_color,double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght);
	void set_warm_blooded_char(std::string species, double eye_size, std::string eye_color, double body_size,
		std::string skin_color, double brain_size, double tail_length, double leg_lenght);
	void print_warm_blooded_char();
	~WarmBlooded();

private:
	double _leg_length;

};
