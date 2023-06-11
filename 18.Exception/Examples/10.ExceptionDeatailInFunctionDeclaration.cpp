// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
// in C++11
void say_hello1(string name) noexcept
{
	cout << "hello " << name;
}

void say_hello2(string name) noexcept(true)
{
	cout << "hello " << name;
}

void say_hello3(string name) noexcept(false)
{
	cout << "hello " << name;
}

void say_hello333(string name) noexcept(false)
{
	cout << "hello " << name;
}

void say_hello11(string name) throw()
{
	cout << "hello " << name;
}
void say_hello22(string name) throw(...)
{
	cout << "hello " << name;
}
void say_hello33(string name) throw(out_of_range)
{
	cout << "hello " << name;
}
int main()
{
	say_hello1("reza");

	return 0;
}

