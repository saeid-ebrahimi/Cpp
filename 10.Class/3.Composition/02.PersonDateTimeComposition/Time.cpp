

#include "stdafx.h"
#include "Time.h"
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

Time::Time(int hour, int min , int sec )
{
	reset(hour, min, sec);
}
bool is_valid_time(int hour, int min, int sec)
{
	return 0 <= sec && 60 > sec && 0 <= min && min < 60 && 0 <= hour && hour <= 23;
}
void Time::reset(int hour, int min , int sec )
{
	if (is_valid_time(hour, min, sec))
	{
		_sec = sec;
		_min = min;
		_hour = hour;

	}
	else
	{
		cout << "invalid time inserted!" << endl;
		_sec = _min = _hour = 0;
	}

}
void Time::advance()
{
	_sec++;
	if (_sec >= 60)
	{
		_sec -= 60;
		_min++;
	}
	if (_min >= 60)
	{
		_min -= 60;
		_hour++;
	}
	if (_hour >= 24)
		_hour -= 24;
}
void Time::print_time()
{
	cout << _hour << ": " << _min << ": " << _sec << endl;
}
void Time::printAmPm()
{
	if (_hour <= 11)
	{
		cout << _hour << ": " << _min << ": " << _sec << " " << " AM" << endl;
	}
	else
	{
		cout << (_hour - 12) << ": " << _min << ": " << _sec << " " << "PM" << endl;
	}
}