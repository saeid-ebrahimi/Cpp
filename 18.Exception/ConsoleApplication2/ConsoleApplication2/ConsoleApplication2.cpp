#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass() {
		cout << "MyClass constructor called." << endl;
	}
	~MyClass() {
		cout << "MyClass deconstructor called." << endl;
	}
	std::string msg = "Hello World!!";
private:
};
int main() {
	MyClass* mcptr;
	cout << "MyClass constructor for object mcptr not yet called."<< endl;
	mcptr = new MyClass();
	cout << "MyClass deconstructor for object mcptr not yet called."<< endl;
	delete mcptr;

	cout << "Invoke constructor using placement new" << endl;
	new(mcptr) MyClass();
	cout << "Invoke deconstructor by calling it explicitly" << endl;
	mcptr->~MyClass();
	return 0;
}