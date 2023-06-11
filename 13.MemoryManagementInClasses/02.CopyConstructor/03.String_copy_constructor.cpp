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
	String(const String&); // copy constructor
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

String::String(const String& old_str)
{
	_size = old_str._size;
	_s = new char[_size + 1];
	strcpy_s(_s,_size +1, old_str._s);
}

int main()
{
	String str1("GeeksQuiz"); // constructor called 
	String str2 = str1; //copy constructor called
	String* str3 = new String(str1); //copy constructor called
	std::cout << str1.get_str() << std::endl; // what is printed ?
	std::cout << str2.get_str() << std::endl;

	str2.change("GeeksforGeeks");

	std::cout << str1.get_str() << std::endl; // what is printed now?
	std::cout << str2.get_str() << std::endl;
	std::cout << str3-> get_str() << std::endl;
	delete str3; // destructor called 
	return 0;
	// destructor called 
}
