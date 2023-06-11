#pragma once
#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include "Point2D.h"

class Creature
{
private:
	std::string _m_name;
	Point2D _m_location;

public:
	Creature(const std::string& name, const Point2D& location)
		: _m_name{ name }, _m_location{ location }
	{
	}

	void print_creature()
	{
		std::cout << _m_name << " is at ";
		_m_location.print_point();
	}

	void moveTo(int x, int y)
	{
		_m_location.setPoint(x, y);
	}
};

#endif