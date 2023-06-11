
#include "stdafx.h"
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Time
{
public:
	Time(): _sec(0),_min(0),_hour(0){}
	Time(int, int, int);
	void reset(int, int, int);;
	inline int get_hour() {	return _hour;}
	inline int get_min() { return _min; }
	inline int get_sec() { return _sec; }
	void advance();
	void print_time();
	void printAmPm();
	~Time(){}

private:
	int _sec;
	int _min;
	int _hour;
};
Time::Time(int hour, int min = 0, int sec = 0)
{
	reset(hour, min, sec);
}
bool is_valid_time(int hour, int min , int sec)
{
	return 0 <= sec && 60 > sec && 0 <= min && min < 60 && 0 <= hour && hour <= 23;
}
void Time::reset(int hour, int min = 0, int sec = 0)
{
	if ( is_valid_time(hour,min,sec))
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
		cout << _hour << ": "<< _min <<": " << _sec << " " << " AM" << endl;
	}
	else
	{
		cout << (_hour-12) << ": " << _min << ": " << _sec << " " << "PM" << endl;
	}
}
int main()
{
	Time t1;
	Time t2(22);
	Time t3(2, 30);
	Time t4(3, 25, 50);
	t1.printAmPm();
	t1.reset(20, 11, 6);
	t1.printAmPm();
	t2.printAmPm();
	Time(20, 70, 1).printAmPm();
}
