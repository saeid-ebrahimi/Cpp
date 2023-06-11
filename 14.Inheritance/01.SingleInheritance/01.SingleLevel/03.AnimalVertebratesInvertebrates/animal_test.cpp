#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Animal.h"
#include "Vertebrates.h"

using std::cout;
using std::endl;


int main()
{
	Animal unknown;
	cout << "unknown char:\n";
	unknown.print_animal_char();
	Animal mammal("mammals", 2, "yellow", 200, "brown");
	cout << "mammal char:\n";
	mammal.print_animal_char();
	Vertebrates ver1("dog", 2, "brown", 200, "white", 10, 30);
	cout << "ver1 char:\n";
	ver1.print_vertebrates_char();

}