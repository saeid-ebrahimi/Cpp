#pragma once
#include <string>
class Animal
{
public:
	Animal():_species("[unassigned species]"),_eye_size(-1),_eye_color("[unassigned eye color]"),_body_size(-1),_skin_color("[unassigned skin color]"){}
	Animal(std::string species,double eye_size,std::string eye_color,double body_size,std::string skin_color);
	void set_animal_char(std::string species,double eye_size, std::string eye_color, double body_size, std::string skin_color);
	void print_animal_char();
	~Animal(){}

private:
	std::string _species;
	double _eye_size;
	std::string _eye_color;
	double _body_size;
	std::string _skin_color;
};
