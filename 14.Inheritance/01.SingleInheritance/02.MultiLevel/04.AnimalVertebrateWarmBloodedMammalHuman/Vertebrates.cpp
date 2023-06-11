#include "stdafx.h"
#include "Vertebrates.h"
#include <iostream>

using std::cout;
using std::endl;

Vertebrates::Vertebrates() :Animal(), _brain_size(-1),_tail_length(-1){}

Vertebrates::Vertebrates(std::string species = "[unassigned species]", double eye_size = -1
	, std::string eye_color = "[unassigned eye color]",
	double body_size = -1, std::string skin_color = "[unassigned skin color]",
	double brain_size = -1, double tail_length = -1)
{
	set_vertebrates_char(species, eye_size, eye_color, body_size, skin_color,brain_size,tail_length);

	
}

void Vertebrates::set_vertebrates_char(std::string species = "[unassigned species]", double eye_size = -1
	, std::string eye_color = "[unassigned eye color]",
	double body_size = -1, std::string skin_color = "[unassigned skin color]",
	double brain_size = -1, double tail_length = -1)
{
	set_animal_char(species, eye_size, eye_color, body_size, skin_color);
	if (brain_size >= 0)
		_brain_size = brain_size;
	else
	{
		cout << "invalid brain size!" << endl;
		_brain_size = -1;
	}
	if (tail_length >= 0)
		_tail_length = tail_length;
	else
	{
		cout << "invalid tail lenght!" << endl;
		_tail_length = -1;
	}
}

void Vertebrates::print_vertebrates_char()
{
	print_animal_char();
	cout << "animal tail length: " << _tail_length << endl;
	cout << "animal brain size: " << _brain_size << endl;
}

Vertebrates::~Vertebrates()
{
}
