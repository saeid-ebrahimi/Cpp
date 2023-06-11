#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Date
{
public:
	Date(int d, int m, int y);
	void set_date(int d, int m, int y);
	Date& operator++();
	bool operator==(Date date);

	int get_day() { return day; }
	int get_month() { return month; }
	int get_year() { return year; }
	friend ostream& operator<<(ostream& out, const Date& d);
private:
	int day;
	int month;
	int year;
};
Date::Date(int d, int m, int y)
{
	set_date(d, m, y);
}
bool is_leap_year(int year)
{
	int r = year % 33;
	return (r == 1 || r == 5 || r == 9 || r == 13 || r == 17 || r == 22 || r == 26 || r == 30);
}
int days_of_month(int m, int y)
{
	if (m < 7)
		return 31;
	else if (m < 12)
		return 30;
	else if (m == 12)
		return is_leap_year(y) ? 30 : 29;
	else
		abort();
}
void Date::set_date(int d, int m, int y)
{
	if (y<0 || m<1 || m >12 || d<1 || d > days_of_month(m, y))
		abort();
	day = d;
	month = m;
	year = y;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << d.day << '/' << d.month << '/' << d.year;
	return out;
}
Date& Date::operator++()
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
	return *this;
}
bool Date::operator==(Date date)
{
	return (day == date.day && month == date.month && year == date.year);
}
int days_between(Date d1, Date d2)
{
	// Assuming d1 is not later than d2
	int count = 1;
	while (!(d1 == d2))
	{
		d1.inc_by_one();
		count++;
	}
	return count;
}
Date str_to_date(string s)
{
	// TO DO:Handle formatting errors by assuming input format is valid
	int slash_pos = s.find('/');
	int d = atoi(s.substr(0, slash_pos).c_str());
	s = s.substr(slash_pos + 1);
	slash_pos = s.find('/');
	int m = atoi(s.substr(0, slash_pos).c_str());
	int y = atoi(s.substr(slash_pos + 1).c_str());

	return Date(d, m, y);
}
Date& operator >> (istream& in, Date& d)
{
	string my_in_str;
	in >> my_in_str;
	d = str_to_date(my_in_str);
	return d;
}
int main() {
	string s = "12/01/1300";
	Date d = str_to_date(s);
	cout << d <<endl;
	cout << str_to_date(s)<<endl;
	cin >> d;
	cout << d<<endl;
	d.inc_by_one();
	cout << d<<endl;
	return 0;
}
