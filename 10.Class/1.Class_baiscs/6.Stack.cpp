
#include "stdafx.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

const int SIZE_OF_STACK = 100;
class Stack
{
public:
	Stack() :_count{ 0 } {};
	~Stack() {};
	inline void push(const int item) {_data[_count] = item; _count++;}
	inline int pop()
	{_count--;	return _data[_count ];}

private:
	int _count;
	int _data[SIZE_OF_STACK];
};

int main()
{
	Stack s1;
	s1.push(124);
	s1.push(156);
	cout << s1.pop() << endl;
	

}