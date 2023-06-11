// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
using namespace std;

template<class arrayType,const int size>
class GenericArray
{
public:
	arrayType& operator[](const int index)
	{
		
		// writing and reading for non const objects
		try
		{
			if (index > size - 1)
			{
				throw out_of_range("index out of bounds");
			}
			return m_array[index];
		}
		catch (const out_of_range& e)
		{
			cout << e.what() << endl;
			return m_array[size - 1];
		}

	}
	arrayType operator[](const int index)const
	{
		// reading for const
		try
		{
			if (index > size - 1)
			{
				throw out_of_range("index out of bounds");
			}
			return m_array[index];
		}
		catch (const out_of_range& e)
		{
			cout << e.what() << endl;
		}
		
	}
private:
	arrayType m_array[size];
};
int main() 
{
	GenericArray<int, 5> myIntArray;
	GenericArray<double, 5> myDoubleArray;
	GenericArray<float, 5> myFloatArray;

	for (int i = 0; i < 5; i++)
	{
		myIntArray[i] = i * 2;
		myDoubleArray[i] = i*2.0;
		myFloatArray[i] = float(i*2.0);
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
	myDoubleArray[6] = 12;
	cout << myDoubleArray[45] << endl;
	return 0;
}