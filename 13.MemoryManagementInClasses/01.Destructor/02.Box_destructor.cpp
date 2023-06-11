#include "stdafx.h"
// C++ program to implement the destructor
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

	//shallow copy
	box second = first;

	// Display the dimensions
	second.show_data();

	return 0;
}
