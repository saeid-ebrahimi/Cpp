#pragma once
#include "Time.h"
class Date
{
public:
	Date(int d, int m, int y, int h = 0, int min =0, int s=0);
	void set_date(int d, int m, int y , int h=0, int min=0, int s=0);
	void print_date();
	void inc_one_day();
	bool equals(Date d);
	//getters methods
	inline int get_day() { return this->day; }
	inline int get_month() { return month; }
	inline int get_year() { return year; }
	Time get_time() { return time; }
private:
	int day;
	int month;
	int year;
	Time time;
};
