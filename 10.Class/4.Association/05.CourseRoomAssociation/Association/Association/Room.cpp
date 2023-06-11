// Association
// Room.cpp
#include "stdafx.h"
#include <iostream>
#include "Room.h"
#include "Course.h"

Room::Room(const char* n) : name{ n } {}
void Room::book(Course& c) {
	if (course) course->release();
	course = &c;
}
void Room::release() {
	course = nullptr;
}
const char* Room::get() const {
	return name.get();
}
void Room::display() const {
	std::cout << name.get() << ' ' <<
		(course ? course->get() : "available")
		<< std::endl;
}