
/*
Sometimes objects may have a relationship with other objects of the same type.
This is called a reflexive association.
A good example of a reflexive association is the relationship
between a university course and its prerequisites (which are also university courses).
*/
#include "stdafx.h"
#include <string>
#include <vector>
class Course
{
private:
	std::string m_name;
	const std::vector<Course*> m_prerequisite;

public:
	Course(const std::string& name, const std::vector<Course*> prerequisite) :
		m_name{ name }, m_prerequisite{ prerequisite }
	{
	}

};