#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
class Teacher
{
private:
	std::string m_name{};

public:
	Teacher(const std::string& name)
		: m_name{ name }
	{
	}

	const std::string& getName() const { return m_name; }
};

class Department
{
private:
	std::vector<const Teacher*> _teachers;
	const Teacher* m_teacher; // This dept holds only one teacher for simplicity, but it could hold many teachers

public:
	Department(const Teacher* teacher)
		: m_teacher{ teacher }
	{
	}

	void add(Teacher t)
	{
		_teachers.push_back(&t);
	}
	Teacher get_teacher() { return *m_teacher; }
};

int main()
{
	// Create a teacher outside the scope of the Department
	Teacher bob{ "Bob" }; // create a teacher
	Teacher* bob_ptr = &bob;
	{
		// Create a department and use the constructor parameter to pass
		// the teacher to it.
		Department department{ bob_ptr };
		std::cout << department.get_teacher().getName() << std::endl;
		std::cout << bob.getName()<< std::endl;
	} // department goes out of scope here and is destroyed

	  // bob still exists here, but the department doesn't

	std::cout << bob.getName() << " still exists!\n";

	Teacher t1{ "Bob" };
	Teacher t2{ "Frank" };
	Teacher t3{ "Beth" };

	{
		// Create a department and add some Teachers to it
		Department department(&t1); // create an empty Department

		department.add(t2);
		department.add(t3);

		std::cout << department.get_teacher().getName() << std::endl;

	} // department goes out of scope here and is destroyed

	std::cout << t1.getName() << " still exists!\n";
	std::cout << t2.getName() << " still exists!\n";
	std::cout << t3.getName() << " still exists!\n";
	return 0;
}