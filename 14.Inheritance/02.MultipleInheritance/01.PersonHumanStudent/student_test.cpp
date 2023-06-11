#include "stdafx.h"
#include<iostream>
#include<cstring>
#include "Animal.h"
#include "Vertebrates.h"
#include "Invertebrates.h"
#include "WarmBlooded.h"
#include "Mammal.h"
#include "Human.h"
#include "Student.h"
#include <string>

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
	Human human("human", 2, "brown", 150, "white", 15, 1, 80, false, true, "black", 60);
	cout << "human cha:\n";
	human.print_human_char();
	Student student("ali", "2281498766", "9320016", 22, "human", 2, "black",
		160, "black", 14, 3, 100, false, true, "black", 70);
	cout << "ali char:\n";
	student.print_student_char();
}