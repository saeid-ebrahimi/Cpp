#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Date
{
public:
	Date(int d, int m, int y);
	void set_date(int d, int m, int y);
	void print_date();
	void inc_one_day();
	bool equals(Date d);
	int compare(Date d);
	string day_of_week();
	//getters methods
	int get_day() { return this->day; }
	int get_month() { return month; }
	int get_year() { return year; }
private:
	int day;
	int month;
	int year;
};

class Person
{
public:
	Person(string name, int d, int m, int y);
	Date get_bdate() { return bdate; }
	string get_name() { return name; }
private:
	string name;
	Date bdate;
};
Date str_to_date(string s);
bool is_birthday(Date, Date);
int main() {
	vector<Person> vp;
	vp.push_back(Person("ahmad", 2, 7, 1370));
	vp.push_back(Person("ali", 3, 12, 1368));
	vp.push_back(Person("lale", 12, 2, 1360));

	cout << "Today? ";
	string today_str;
	cin >> today_str;
	Date today = str_to_date(today_str);

	for (int i = 0; i < vp.size(); i++)
		if (is_birthday(vp[i].get_bdate(), today))
			cout << "it's " << vp[i].get_name() << " Birth Day " << endl;

	for (int i = 0; i < vp.size(); i++)
		if (is_birthday(vp[i].get_bdate(), today))
			cout << "Happy Birth Day " << vp[i].get_name() << endl;

	return 0;
}
Person::Person(string n, int d, int m, int y) :bdate(d, m, y)
{
	if (n == "")
		abort();
	else
		name = n;
}
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
	if (m<7)
		return 31;
	else if (m<12)
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
int days_between(Date d1, Date d2)
{
	int compare_result = d1.compare(d2);
	int count == 1;
	switch (compare_result)
	{
	case 1:
	{
		while (!d1.equals(d2))
		{
			d1.inc_one_day();
			count++;
		}
		return count;
	}
	case -1:
	{
		while (!d2.equals(d1))
		{
			d2.inc_one_day();
			count++;
		}
		return count;
	}
	case 0;
		return 0;
	}

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
bool is_birthday(Date date1, Date date2)
{
	return (date1.get_day() == date2.get_day()) && (date1.get_month() == date2.get_month());
}
int Date::compare(Date d)
{
	if (year > d.get_year())
		return 1;
	else if (year < d.get_year())
		return -1
	else
	{
		if (month > d.get_month())
			return 1;
		else if (month < d.get_month())
			return -1;
		else
		{
			if (day > d.get_day())
				return 1;
			else if (day < d.get_day())
				return -1;
			else
				return 0;
		}
	}
}
string  Date::day_of_week()
{
	int diff = days_between(Date(day, month, year), Date(1, 1, 1));
	diff %= 7;
	switch (diff) {
	case 0:
		return "fri";
	case 1:
		return "sat";
	case 2:
		return "sun";
	case 3:
		return "mon";
	case 4:
		return "tue";
	case 5:
		return "wed";
	case 6:
		return "thu";

	}
}