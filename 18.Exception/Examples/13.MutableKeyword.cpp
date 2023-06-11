#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class myClass {
public:
	myClass(std::string s = "")
	{
		str = s;
	}
	void print() const
	{
		cout << str << endl;
	}
	void change(std::string chgstr) const {
		str = chgstr;
	}
private:
	mutable std::string str;
};
int main()
{
	const myClass cc("Hello World !!!!");
	std::string mystring("The string has changed.");
	cc.change(mystring);
	cc.print();
	return 0;
}