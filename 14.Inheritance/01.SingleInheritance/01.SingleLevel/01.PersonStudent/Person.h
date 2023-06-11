#pragma once 
#include <string>

class Person 
{
public:
	Person ();
	Person(const std::string & name , int age);
	void displayNameAge() const;
	
protected:
	int age;
private:
	std::string name;

};
