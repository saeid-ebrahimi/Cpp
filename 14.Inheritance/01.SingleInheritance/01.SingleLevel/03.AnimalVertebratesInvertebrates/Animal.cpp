#include "stdafx.h"
#include "Animal.h"
#include <iostream>

using std::cout;
using std::endl;
Animal::Animal(std::string species = "[unassigned species]",double eye_size = -1
	, std::string eye_color= "[unassigned eye color]",
	double body_size = -1, std::string skin_color = "[unassigned skin color]")
{
	set_animal_char(species, eye_size, eye_color, body_size, skin_color);
}

void Animal::set_animal_char(std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1 
	, std::string skin_color = "[unassigned skin color]")
{
	if (species != "")
		_species = species;
	else
	{
		cout << "invalid species!" << endl;
		_species = "[unassigned species]";
	}
	if (eye_size > 0)
		_eye_size = eye_size;
	else
	{
		cout << "invalid eye size!" << endl;
	}
	if (eye_color != "")
		_eye_color = eye_color;
	else
	{
		cout << "invalid eye color!" << endl;
		_eye_color = "[unassigned eye color]";
	}
	if (body_size > 0)
	{
		_body_size = body_size;
	}
	else
	{
		cout << "invalid body size!" << endl;
		_body_size = -1;
	}
	if (skin_color != "")
		_skin_color = skin_color;
	else
	{
		cout << "invalid skin color!" << endl;
		_skin_color = "[unassigned skin color]";
	}
}

void Animal::print_animal_char()
{
	cout << "animal species is: " << _species << endl;
	cout << "animal eye size: " << _eye_size << endl;
	cout << "animal eye color: " << _eye_color << endl;
	cout << "animal body size: " << _body_size << endl;
	cout << "animal skin color: " << _skin_color << endl;
}
