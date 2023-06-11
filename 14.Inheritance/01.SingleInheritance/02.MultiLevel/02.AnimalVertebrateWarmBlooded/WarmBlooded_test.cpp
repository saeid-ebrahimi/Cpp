#include "stdafx.h"
#include "WarmBlooded.h"
#include <iostream>

using std::cout;
using std::endl;

WarmBlooded::WarmBlooded() :Vertebrates(), _leg_length(-1) {}
WarmBlooded::WarmBlooded(std::string species = "[unassigned species]", double eye_size = -1	, 
	std::string eye_color = "[unassigned eye color]",	double body_size = -1, 
	std::string skin_color = "[unassigned skin color]",
	double brain_size = -1, double tail_length = -1, double leg_length = -1)
{
	set_warm_blooded_char(species, eye_size, eye_color, body_size, skin_color, brain_size, tail_length, leg_length);
}
void WarmBlooded::set_warm_blooded_char(std::string species, double eye_size, std::string eye_color, double body_size, std::string skin_color, double brain_size, double tail_length, double leg_lenght)
{
	set_vertebrates_char(species, eye_size, eye_color, body_size, skin_color, brain_size, tail_length);
	if (leg_lenght >= 0)
		_leg_length = leg_lenght;
	else
	{
		cout << "invalid leg length!" << endl;
		_leg_length = -1;
	}
}
void WarmBlooded::print_warm_blooded_char()
{
	print_vertebrates_char();
	cout << "animal leg length: " << _leg_length << endl;
}
WarmBlooded::~WarmBlooded() {}