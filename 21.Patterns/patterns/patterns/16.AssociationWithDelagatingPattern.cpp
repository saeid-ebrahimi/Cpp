#include "stdafx.h"
#include <iostream>

using std::cout;

class LibraryCard {
public:
	LibraryCard() : cardNbr(rand()) {}
	
	int getCardNumber() {
		return cardNbr;
	}
	

private:
	int cardNbr;
};

class Student {
public:
	Student() : lc(NULL) {}

	~Student() {}

	void setLibraryCard(LibraryCard* llc) {
		lc = llc;
	}

	//Association: Student class does not control lifecycle of LibraryCard but accesses functions.
	//Delagation: Student delagates request to LibraryCard. 
	int libraryCardNumber() {
		if (lc) {
			return lc->getCardNumber();
		}
		else {
			return NULL;
		}
	}
	LibraryCard* get_card() {
		return lc;
	}
private:
	LibraryCard* lc;
};


int main(int argc, char* argv[]) {

	LibraryCard myCard;
	Student me;
	me.setLibraryCard(&myCard);

	cout << "My library card number is " << me.libraryCardNumber() << "\n";
	cout << typeid(me.get_card()).name() << std::endl;

	return 0;
}