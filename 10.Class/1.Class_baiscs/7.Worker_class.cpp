
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Worker
{
public:
	Worker() :_name{ "[unassigned]" }, _working_hours{ 0 }, _child_num(0), _hourly_payment(20000){};
	Worker(string, int, int, int);
	void assign_inf(string, int, int, int);
	~Worker() {};
	double calc_salary();
private:
	string _name;
	int _working_hours;
	int _child_num;
	int _hourly_payment;
};

Worker::Worker(string name, int working_hours  = 0,int child_num = 0 , int hourly_payment = 20000)
{
	assign_inf(name, working_hours, child_num, hourly_payment);
}
void Worker::assign_inf(string name, int working_hours = 0, int child_num = 0, int hourly_payment = 20000)
{
	if (name != "")
		_name = name;
	else
		_name = "[unassigned]";
	if (working_hours > 0)
		_working_hours = working_hours;
	else
		_working_hours = 0;
	if (child_num > 0)
		_child_num = child_num;
	else
		_child_num = 0;
	if (hourly_payment > 0)
		_hourly_payment = hourly_payment;
	else
		hourly_payment = 0;
}
double Worker::calc_salary()
{
	double salary;
	if (_working_hours < 40)
	{
		salary = _hourly_payment * _working_hours;
	}
	else
	{
		salary = _hourly_payment * 40.0 + 1.5*_hourly_payment*(_working_hours - 40);
	}
	double insurance = 0.07 * salary;
	salary -= insurance;
	
	if (_child_num > 2)
		salary -= 2000;
	double tax = (salary - 350000)*0.1;
	if (salary > 350000)
		salary -= tax;
	return salary;
}
int main()
{
	Worker workers[3] = { Worker(),Worker("ali",300,1,25000),Worker("ahmad",400) };
	workers[0].assign_inf("reza", 500, 3);
	cout << workers[0].calc_salary() <<'\t'<< workers[1].calc_salary()<< '\t' << workers[2].calc_salary() << endl;
}