// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "Student.h"
int _tmain(int argc, _TCHAR* argv[])

{
	Student student1;
	student1.displayNameAge();
	student1.displayCourse();

	Student student2("saeid ebrahimi", 24,"mathematic");
	student2.displayNameAge();
	student1.displayCourse();
	return 0;
}

