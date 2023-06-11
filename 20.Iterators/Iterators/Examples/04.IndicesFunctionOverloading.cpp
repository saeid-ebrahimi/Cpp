// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;
template<typename arrayType, int size>
class GenericArray
{
public:

	arrayType& operator[](const int index)
	{
		//writing
		if (index >= size)
		{
			cout << "index out of bounds" << endl;
			// return last element.
			return m_array[size - 1];
		}
		return m_array[index];
	}

	arrayType operator[](int index)const
	{
		//Reading
		if (index >= size)
		{
			cout << "Index out of bounds" << endl;
		}
		//return last element
		return m_array[index];
	}
private:
	arrayType m_array[size];
};

int main()
{
	GenericArray<int, 5> myIntArray;
	GenericArray<double, 5> myDoubleArray;
	GenericArray<float, 5> myFloatArray;
	const GenericArray<int, 5> constIntArray;
	for (int i = 0; i < 5; i++)
	{
		//constIntArray[i] = 19;
		myIntArray[i] = i * 2;
		myDoubleArray[i] = i*2.0;
		myFloatArray[i] = (i*2.0f);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "myIntArray[" << i << "] is " << myIntArray[i] << endl;
	}
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
	{
		printf("myFloatArray[%i] is %f \n", i, myFloatArray[i]);
	}
	cout << "\n\n";
	for (int i = 0; i < 5; i++)
	{
		printf("myDoubleArray[%i] is %LF \n", i, myDoubleArray[i]);
	}
	cout << "\n\n";

	cout << myDoubleArray[45] << endl;
	return 0;
}

