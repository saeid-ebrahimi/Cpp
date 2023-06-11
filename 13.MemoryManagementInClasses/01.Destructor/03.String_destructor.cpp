#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class String
{
private:
	char *_s;
	int _size;
public:
	String(const char *str = NULL); // constructor
	~String() { delete[] _s; }// destructor
	char* get_str() { return _s; } // Function to get string
	void change(const char *); // Function to change
};

String::String(const char *str)
{
	_size = strlen(str);
	_s = new char[_size + 1];
	strcpy_s(_s, _size+1, str);
	
}

void String::change(const char *str)
{
	delete[] _s;
	_size = strlen(str);
	_s = new char[_size + 1];
	strcpy_s(_s, _size + 1, str);

}

int main()
{
	String str1("GeeksQuiz"); // constructor called 
	String str2 = str1; //shallow copy constructor called
	String* str3 = new String(str2); //shallow copy constructor called
	std::cout << str1.get_str() << std::endl; // what is printed ?
	std::cout << str2.get_str() << std::endl;

	str2.change("GeeksforGeeks");

	std::cout << str1.get_str() << std::endl; // what is printed now?
	std::cout << str2.get_str() << std::endl;

	std::cout << str3->get_str() << std::endl;
	delete str3; // destructor called 
	std::cout << str1.get_str() << std::endl; // what is printed now?
	std::cout << str2.get_str() << std::endl;

	return 0;
	// destructor called 
}
