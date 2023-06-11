// patterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;
template<typename arrayType, typename func>
void fillArray(arrayType* array, size_t arraySize, func f)
{
	for (int i = 0; i < arraySize; i++)
		array[i] = f();
}
template<typename arrayType>
void printArray(arrayType *array, size_t arraySize) {
	cout << "Array contains the following elements.\n";
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << endl;
	}
	cout << "\n\n";
}
void nonTemplateFillArray(int* array, size_t arraySize, int(*getElement)())
{
	for (int i= 0; i < arraySize; i++)
	{
		array[i] = getElement();
	}
}
void nonTemplateFillArray(char* array, size_t arraySize, char(*getElement)())
{
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = getElement();
	}
}
int fillWithInts()
{
	return rand();
}
char fillWithChars()
{
	
	return char('A' + rand() % 24);
}
int main()
{
	int intArray[10];
	fillArray(intArray, 10, fillWithInts);
	printArray(intArray,10);

	int intArrayNoTemplate[10];
	nonTemplateFillArray(intArrayNoTemplate, 10, fillWithInts);
	cout << "Using non templated array fill call back function. \n";
	printArray(intArrayNoTemplate, 10);

	char charArray[10];
	fillArray(charArray, 10, fillWithChars);

	printArray(charArray, 10);
	nonTemplateFillArray(charArray, 10, fillWithChars);
    return 0;
}

