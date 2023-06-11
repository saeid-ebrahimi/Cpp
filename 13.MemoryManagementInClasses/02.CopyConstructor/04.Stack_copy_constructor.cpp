#include "stdafx.h"
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;
const int DEFAULT_SIZE = 10;
class Stack
{
public:
	Stack(int size);
	Stack(const Stack&); //copy constructor
	~Stack();
	void push(int x);
	void pop();
	int top() const;
	int element_count()const { return _count; }

private:
	int *_elements;
	int _size;
	int _count;

};

Stack::Stack(int size = DEFAULT_SIZE)
{
	cout << " --constructor called-- "<< endl;
	_size = size;
	_elements = new int[size];
	_count = 0;
}
Stack::Stack(const Stack& st)
{
	cout << " --copy constructor called-- " << endl;
	_count = st._count;
	_size = st._size;
	_elements = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_elements[i] = st._elements[i];
	}
}

Stack::~Stack()
{
	cout << "--destructor called--" << endl;
	delete[] _elements;
}
void Stack::push(int num)
{
	if (_count >= _size)
		cout <<"invalid operation\npossiblity for stack overflow!!" << endl;
	else
	{
		_elements[_count] = num;
		_count++;
	}
}
void Stack::pop()
{
	if (_count <= 0)
		cout << "invalid operation\npossiblity for stack undrflow!!" << endl;
	else
		_count--;
}

int Stack::top()const
{
	if (_count <= 0)
		cout << "invalid operation\nstack is empty!!" << endl;
	else
		return _elements[_count-1];
}
int main()
{
	Stack st1; //call default constructor
	st1.push(3);
	cout << st1.top() << endl;

	Stack* st = new Stack(st1); //call deep copy constructor
	st->push(11);
	cout << st->top() << endl;
	delete st;
	cout << st1.top() << endl;
}