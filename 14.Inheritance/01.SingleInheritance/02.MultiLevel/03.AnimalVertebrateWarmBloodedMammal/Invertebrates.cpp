#include "stdafx.h"
#include "Animal.h"
#include "Invertebrates.h"
#include <iostream>

using std::cout;
using std::endl;
Invertebrates::Invertebrates() :Animal(), _skin_hardness(-1){}

Invertebrates::Invertebrates(std::string species = "[unassigned species]", double eye_size = -1
	, std::string eye_color = "[unassigned eye color]",
	double body_size = -1, std::string skin_color = "[unassigned skin color]", double skin_hardness = -1)
{
	set_Invertebrates_char(species, eye_size, eye_color, body_size, skin_color, skin_hardness);
}

void Invertebrates::set_Invertebrates_char(std::string species = "[unassigned species]", double eye_size = -1
	, std::string eye_color = "[unassigned eye color]",
	double body_size = -1, std::string skin_color = "[unassigned skin color]", double skin_hardness = -1)
{
	set_animal_char(species, eye_size, eye_color, body_size, skin_color);
	if (skin_hardness >= 0)
		_skin_hardness = skin_hardness;
	else
	{
		cout << "invalid skin hardness!" << endl;
		_skin_hardness = -1;
	}

}

void Invertebrates::print_Invertebrates_char()
{
	print_animal_char();
	cout << "animal skin hardness: " << _skin_hardness<< endl;
}

Invertebrates::~Invertebrates(){}
