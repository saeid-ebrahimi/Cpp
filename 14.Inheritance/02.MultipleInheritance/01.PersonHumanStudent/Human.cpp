#include "stdafx.h"
#include "Human.h"
#include <iostream>
Human::Human():Mammals(),_hair_color("[unassigned hair color]"),_hand_length(-1){}

Human::Human(std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]", double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false,
	std::string hair_color= "[unassigned hair color]", double hand_length=-1)
{
	set_human_char(species, eye_size, eye_color, body_size, skin_color,
		brain_size, tail_length, leg_length, fur, hair, hair_color, hand_length);
}

void Human::set_human_char(std::string species = "[unassigned species]", double eye_size = -1,
	std::string eye_color = "[unassigned eye color]", double body_size = -1,
	std::string skin_color = "[unassigned skin color]", double brain_size = -1,
	double tail_length = -1, double leg_length = -1, bool fur = false, bool hair = false,
	std::string hair_color = "[unassigned hair color]", double hand_length = -1)
{
	set_mammal_char(species, eye_size, eye_color, body_size, skin_color,
		brain_size, tail_length, leg_length, fur, hair);
	if (hair_color != "")
		_hair_color = hair_color;
	else
	{
		std::cout << "invalid hair color!!" << std::endl;
		_hair_color = "[unassigned hair color]";
	}
	if (hand_length >= 0)
		_hand_length = hand_length;
	else
	{
		std::cout << "invalid hand length!!" << std::endl;
		_hand_length = -1;
	}
}

void Human::print_human_char()
{
	print_mammal_char();
	std::cout << "animal hair color: "<< _hair_color << std::endl;
	std::cout << "animal hand lenght: "<< _hand_length << std::endl;
}

Human::~Human(){}
