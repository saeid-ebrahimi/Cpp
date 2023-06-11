#pragma once
#include <string>
#include "Date.h"

using std::string;
class Person
{
public:
	Person(string name, int d, int m, int y, int h=0, int min=0, int s=0);
	void set_person(string name, int d, int m, int y, int h = 0, int min = 0, int s = 0);
	Date get_bdate() { return bdate; }
	string get_name() { return name; }
private:
	string name;
	Date bdate;
};