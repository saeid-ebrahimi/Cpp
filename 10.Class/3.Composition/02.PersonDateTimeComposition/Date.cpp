#include "stdafx.h"
#include "Date.h"
#include <iostream>
#include <cstdlib>

using namespace std;
bool is_leap_year(int year);
int days_of_month(int m, int y);
Date::Date(int d, int m, int y, int h , int min, int s)
{
	set_date(d, m, y ,h,min,s);
}
void Date::set_date(int d, int m, int y, int h, int min, int s)
{
	if (y<0 || m<1 || m >12 || d<1 || d > days_of_month(m, y))
		abort();
	day = d;
	month = m;
	year = y;
	time = Time(h, min, s);
}
void Date::print_date()
{
	cout << day << '/' << month << '/' << year << endl;
}
void Date::inc_one_day()
{
	day++;
	if (day > days_of_month(month, year))
	{
		day = 1;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
}
bool Date::equals(Date date)
{
	return (day == date.day && month == date.month && year == date.year);
}
bool is_leap_year(int year)
{
	int r = year % 33;
	return (r == 1 || r == 5 || r == 9 || r == 13 || r == 17 || r == 22 || r == 26 || r == 30);
}
int days_of_month(int m, int y)
{
	if (m<7)
		return 31;
	else if (m<12)
		return 30;
	else if (m == 12)
		return is_leap_year(y) ? 30 : 29;
	else
		abort();
}