// Aggregation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Aggregation
// aggregation.cpp

#include "Club.h"
#include "Name.h"

int main() {
	Name jane("Jane");
	Name john("John");
	Name alice("Alice");
	Name frank("Frank");
	Name stanley("Stanley");
	Club gameClub;
	gameClub += jane;
	gameClub += john;
	gameClub += alice;
	gameClub += frank;
	gameClub.display();
	gameClub -= alice;
	gameClub -= john;
	gameClub -= stanley;
	gameClub.display();
}
