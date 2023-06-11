// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
struct errorinfo {
	int id;
	int locationId;
	int level;
	string description;
	string reason;
};
class myexception:
	public exception
{
public:
	
	myexception(const string& message = "[unassigned]") :msg(message) {};
	virtual ~myexception() throw()
	{
		errorlist.clear();
	}
	virtual char const* what() const throw()
	{
		return msg.c_str();
	}
	void adderror(errorinfo info) throw(bad_alloc)
	{
		try 
		{
			errorlist.push_back(info);
		}
		catch (...)
		{
			cout << "Bad alloc in adderror function." << endl;
		}
	}
	vector<errorinfo>::iterator begin()
	{
		return errorlist.begin();
	}
	vector<errorinfo>::iterator end()
	{
		return errorlist.end();
	}
protected:
	string msg;
	vector<errorinfo> errorlist;
};


int main() {
	try {
		try 
		{
			try
			{
				myexception myex("myexception object thrown.");
				//Create myexception object
				throw myex; //Throw myexception object
			}
			catch (myexception e) { //Catch myexception object
				errorinfo firstinfo; //Create errorinfo struct
				firstinfo.reason = "level 1 error";
				firstinfo.id = 1;
				firstinfo.locationId = 0;
				firstinfo.level = 0;
				firstinfo.description = "First level exception thrown.";
					try
					{
						e.adderror(firstinfo); //Add errorinfo struct to myexception object
					}
					catch (bad_alloc)
					{
						cout << "Out of memory myexception.adderror	bad_alloc." << endl;
					}
				throw e; //Throw myexceptionobject up call stack.
			}
		}
		catch (myexception e)
		{
			errorinfo secondinfo;
			secondinfo.reason = "level 2 error";
			secondinfo.id = 2;
			secondinfo.locationId = 1;
			secondinfo.level = 2;
			secondinfo.description = "Second level exception thrown.";
			try 
			{
				e.adderror(secondinfo);
			}
			catch (bad_alloc) 
			{
				cout << "Out of memory myexception.adderror	bad_alloc." << endl;
			}
			throw e;
		}
	}
	catch (myexception e) {
		//Print out errorinfo structs in myexception object
		for (vector<errorinfo>::iterator iter = e.begin(); iter != e.end(); ++iter) {
			errorinfo next = *iter;
			cout << next.reason << " " << next.id << " " <<	next.locationId 
				 << " " << next.level << " " << next.description <<	endl;
		}
	}
}
