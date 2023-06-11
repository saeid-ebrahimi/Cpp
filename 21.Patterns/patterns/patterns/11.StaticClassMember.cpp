#include "stdafx.h"
#include <iostream>

using namespace std;

class Counter {

public:

	//Default constructor increment count.
	Counter() {
		count++;
	}

	~Counter() {
		count--;
	}

	static int getCount() {
		return count;
	}

private:
	static int count;
};


//initialize count.
int Counter::count = 0;

int main(int argc, char* argv[]) {



	//Show use of static function access through class and scope operator. Show static variable initialised to 0.
	cout << "Initial count value is " << Counter::getCount() << "\n\n";

	//Create 4 instances of Counter.
	Counter c1, c2, c3, c4;
	Counter c5, c6;
	//Display count value again, should be 6.
	cout << "Current count value is " << Counter::getCount() << "\n\n";

	//Call destructor to decrement count.
	c4.~Counter();
	c5.~Counter();
	c6.~Counter();
	//Display count value again, should be 3.
	cout << "Current count value is " << Counter::getCount() << "\n\n";

}