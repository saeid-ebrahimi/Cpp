#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Animal.h"
#include "Vertebrates.h"
#include "Invertebrates.h"
#include "WarmBlooded.h"
#include "mammal.h"
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
	WarmBlooded aligator("aligator", 10, "gold", 250, "green", 15, 120, 40);
	cout << "aligator char:\n";
	aligator.print_warm_blooded_char();
	Mammals lion("lion", 4, "yellow", 200, "brown", 10, 50, 50, true, true);
	cout << "lion char:\n";
	lion.print_mammal_char();


}