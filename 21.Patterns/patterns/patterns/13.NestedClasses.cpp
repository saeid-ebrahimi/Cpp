#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Enclosing
{
public:
	Enclosing() :nested(new Nested()) {}
	void printEnclosing()
	{
		
		nested->printNested(this);
	}
	~Enclosing()
	{
		if (nested)
		{
			delete nested;
		}
	}
private:
	class Nested
	{
	public:
		Nested()
		{
			var1 = rand();
			var2 = "Hello from Nested.";
		}
		void printNested(Enclosing* enc)
		{
			cout << "Enclosing int var is " << enc->enclosingInt << endl;
			cout << "Nested var1 is " << var1 << " Nested var2 is " << var2 << endl;
		}
	private:
		int var1;
		string var2;
	};
private:
	Nested* nested;
	int enclosingInt;
};
int main()
{
	Enclosing en;
	en.printEnclosing();
}