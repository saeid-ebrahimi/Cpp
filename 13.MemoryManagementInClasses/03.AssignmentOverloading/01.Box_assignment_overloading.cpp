#include "stdafx.h"
// C++ program to implement the
// deep copy and assignment overloding
#include <iostream>
using namespace std;

// Box Class
class Box {
private:
	int _length;
	int* _breadth;
	int _height;

public:
	// Constructor
	Box()
	{
		_breadth = new int;
	}

	// Function to set the dimensions
	// of the Box
	void set_dimension(int length, int breadth,
		int height)
	{
		_length = length;
		*_breadth = breadth;
		_height = height;
	}

	// Function to show the dimensions
	// of the Box
	void show_data()
	{
		cout << " Length = " << _length
			<< "\n Breadth = " << *_breadth
			<< "\n Height = " << _height
			<< endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	Box(Box& sample)
	{
		_length = sample._length;
		_breadth = new int;
		*_breadth = *(sample._breadth);
		_height = sample._height;
	}
	//comment below to see difference
	Box& operator=(const Box& b)
	{
		if (this == &b)
			return *this;
		_length = b._length;
		_height = b._height;
		delete _breadth;
		_breadth = new int(*(b._breadth));
		return *this;
	}
	// Destructors
	~Box()
	{
		delete _breadth;
	}
};

// Driver Code
int main()
{
	// Object of class first
	Box* first = new Box();

	// Set the dimensions
	first->set_dimension(12, 14, 16);

	// Display the dimensions
	first->show_data();
	cout << endl;
	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	Box* second = new Box(); //call default constructor
	Box b2 = *first; //call deep copy constructor 
	*second=*first;  //call assignment overloading method

	// Display the dimensions
	delete second;
	b2.show_data();
	cout << endl;
	first->show_data();

	return 0;
}
