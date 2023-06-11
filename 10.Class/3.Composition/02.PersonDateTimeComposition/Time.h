#pragma once
class Time
{
public:
	Time() : _sec(0), _min(0), _hour(0) {}
	Time(int hour, int min = 0, int sec = 0);
	void reset(int hour, int min = 0, int sec = 0);
	inline int get_hour() { return _hour; }
	inline int get_min() { return _min; }
	inline int get_sec() { return _sec; }
	void advance();
	void print_time();
	void printAmPm();
	~Time() {}

private:
	int _sec;
	int _min;
	int _hour;
};
