#include "stdafx.h"
#include "Mammal.h"
#include <iostream>

using std::cout;
using std::endl;

Mammals::Mammals():WarmBlooded(),_fur(true),_hair(true){}

Mammals::Mammals(std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]",	double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false)
{
	set_mammal_char(species, eye_size, eye_color, body_size, skin_color, brain_size, tail_length, leg_length, fur, hair);
}

void Mammals::set_mammal_char(std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]", double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false)
{
	set_warm_blooded_char(species, eye_size, eye_color, body_size, skin_color, brain_size, tail_length, leg_length);
	if (fur == true || fur == false)
		_fur = fur;
	else
	{
		cout << "invalid fur" << endl;
		_fur = false;
	}
	if (hair == true || hair == false)
		_hair = hair;
	else
	{
		cout << "invalid hair" << endl;
		_hair = true;
	}
}

void Mammals::print_mammal_char()
{
	print_warm_blooded_char();
	cout << "animal fur: " << _fur << endl;
	cout << "animal hair: " << _hair << endl;
}

Mammals::~Mammals(){}
