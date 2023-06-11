#include "stdafx.h"
// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int _length;
	int* _breadth;
	int _height;

public:
	// Constructor
	box()
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
	box(box& sample)
	{
		_length = sample._length;
		_breadth = new int;
		*_breadth = *(sample._breadth);
		_height = sample._height;
	}

	// Destructors
	~box()
	{
		delete _breadth;
	}
};

// Driver Code
int main()
{
	// Object of class first
	box first;

	// Set the dimensions
	first.set_dimension(12, 14, 16);

	// Display the dimensions
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	box second = first;

	// Display the dimensions
	second.show_data();

	return 0;
}
