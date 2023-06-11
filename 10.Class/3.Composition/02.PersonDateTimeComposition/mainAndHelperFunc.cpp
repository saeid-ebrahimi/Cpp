#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include "Time.h"
#include "Date.h"
#include "Person.h"

using namespace std;


Date str_to_date(string s);
Time str_to_time(string s);
int main() {
	vector<Person> vp;
	vp.push_back(Person("golam", 2, 7, 1370));
	vp.push_back(Person("ghamar", 3, 12, 1368));
	vp.push_back(Person("alalh", 12, 2, 1360));

	cout << "Today? ";
	string today_str;
	cin >> today_str;
	Date today = str_to_date(today_str);
	today.print_date();
	for (int i = 0; i<vp.size(); i++)
		if (vp[i].get_bdate().equals(today))
			cout << "Happy Birth Day " << vp[i].get_name() << endl;
	cout << "Time? ";
	string time_str;
	cin >> time_str;
	Time time = str_to_time(time_str);
	time.print_time();
	Date bd(today.get_day(), today.get_month(),today.get_year(),time.get_hour(), time.get_min(), time.get_sec());
	bd.print_date();
	bd.get_time().print_time();
	
	
	return 0;
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

	return Date(d, m, y, 0, 0, 0);
}
bool is_birthday(Date date1, Date date2)
{
	return (date1.get_day() == date2.get_day()) && (date1.get_month() == date2.get_month());
}
Time str_to_time(string s)
{
	int colon_pos = s.find(':');
	int hour = stoi(s.substr(0, colon_pos));
	s = s.substr(colon_pos + 1);
	colon_pos = s.find(':');
	int min = stoi(s.substr(0, colon_pos));
	s = s.substr(colon_pos + 1);
	int sec = stoi(s.substr(0, colon_pos));
	return Time(hour, min, sec);
}