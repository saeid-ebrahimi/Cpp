#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Animal.h"
#include "Vertebrates.h"
#include "Invertebrates.h"
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
	Vertebrates dog("dog", 2, "brown", 200, "white", 10, 30);
	cout << "dog char:\n";
	dog.print_vertebrates_char();
	Invertebrates spider("spider", 0.25, "black", 1, "gray", 1);
	cout << "spider char:\n";
	spider.print_Invertebrates_char();
}