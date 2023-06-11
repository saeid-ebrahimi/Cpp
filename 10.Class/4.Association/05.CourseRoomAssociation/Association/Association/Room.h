#pragma once
// Association
// Room.h

#include "Name.h"
class Course;

class Room {
	Name name;
	Course* course{ nullptr };
public:
	Room(const char*);
	void book(Course&);
	void release();
	const char* get() const;
	void display() const;
	//...
};

