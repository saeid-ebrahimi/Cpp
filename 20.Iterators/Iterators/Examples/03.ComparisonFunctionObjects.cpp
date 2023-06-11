// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class RandomAccessIterator>
void randomise(RandomAccessIterator iterBegin, RandomAccessIterator iterEnd)
{
	while (iterBegin < iterEnd)
	{
		iter_swap(iterBegin, iterBegin + rand() % (iterEnd - iterBegin));
		++iterBegin;
	}
}

struct SortedStruct
{
	int value;
	SortedStruct(int k) :value(k) {}
	bool operator<(const SortedStruct& rhs)const
	{
		return (value < rhs.value);
	}
};
class SortedClass
{
public:
	SortedClass(int val) :value(val) {};
	~SortedClass() {};
	int getvalue() const { return value; }
	bool operator< (const SortedClass& rhs)const
	{
		return this->value < rhs.getvalue();
	}
private:
	int value;
};
class LessThan
{
public:
	LessThan(){}
	~LessThan(){}
	bool operator()(const SortedStruct& lhs, const SortedStruct& rhs)const
	{
		return lhs < rhs;
	}
	bool operator()(const SortedClass& lhs, const SortedClass& rhs)const
	{
		return lhs < rhs;
	}
};
class GreaterThan
{
public:
	GreaterThan(int cmp):X(cmp){}
	~GreaterThan(){}
	bool operator()(const SortedStruct& z)const { return z.value > X; }
	bool operator()(const SortedClass& z)const { return z.getvalue() > X; }
private:
	int X;
};

int main()
{
	vector<SortedClass> vecSortClass;
	vector<SortedStruct> vecSortStruct;
	for (int i = 0; i < 50; i++)
	{
		SortedClass sc(i);
		SortedStruct ss(i);
		vecSortClass.push_back(sc);
		vecSortStruct.push_back(ss);
	}
	randomise(vecSortClass.begin(), vecSortClass.end());
	randomise(vecSortStruct.begin(), vecSortStruct.end());

	// sorted class 
	cout << "Vector of sortedClass classes before sorting is " << "\n\n";
	for (vector<SortedClass>::iterator it = vecSortClass.begin(); it != vecSortClass.end(); it++)
	{
		cout << "sorted class index " << distance(vecSortClass.begin(), it) << " has value " << it->getvalue() << endl;
	}
	sort(vecSortClass.begin(), vecSortClass.end(),LessThan());
	cout << "\n\n" << "Vector of sortedClass classes after sorting is" << "\n\n";
	for (vector<SortedClass>::iterator it = vecSortClass.begin(); it != vecSortClass.end(); it++)
	{
		cout << "sorted class index " << distance(vecSortClass.begin(), it) << " has value " << it->getvalue() << endl;
	}
	cout << "\n\n";
	//SortedStruct
	cout << "Vector of sortedStruct structs before sorting is " << "\n\n";
	for (vector<SortedStruct>::iterator it = vecSortStruct.begin(); it != vecSortStruct.end(); it++)
	{
		cout << "sorted struct index " << distance(vecSortStruct.begin(), it) << " has value " << it->value << "\n";
	}
	sort(vecSortStruct.begin(), vecSortStruct.end(),LessThan());
	for (vector<SortedStruct>::iterator it = vecSortStruct.begin(); it != vecSortStruct.end(); it++)
	{
		cout << "sortedStruct index " << distance(vecSortStruct.begin(), it) << " has value " << it->value << "\n";
	}
	cout << "\n\n" << "Vector of sortedClass classes which are greater than 40 " << "\n\n";
	for (vector<SortedClass>::iterator it = vecSortClass.begin(); it != vecSortClass.end(); it++)
	{
		vector<SortedClass>::iterator it2 = it;
		auto ittemp = find_if(it2, it2 + 1, GreaterThan(40));
		if (ittemp != it2 + 1)
		{
			cout << "SortedClass index " << distance(vecSortClass.begin(), it) << " is greater than 40 with value " << ittemp->getvalue() << endl;
		}
	}
	cout << "\n\n" << "Vector of sortedStruct structes which are less than and equal 10 " << "\n\n";
	for (vector<SortedStruct>::iterator it = vecSortStruct.begin(); it != vecSortStruct.end(); it++)
	{
		vector<SortedStruct>::iterator it2 = it;
		auto ittemp = find_if_not(it2, it2 + 1, GreaterThan(10));
		if (ittemp == it2)
		{
			cout << "SortedStruct index " << distance(vecSortStruct.begin(), it) << " is less than and equal 10 with value " << ittemp->value << endl;
		}
	}
	// Destroy elements
	vecSortClass.empty();
	vecSortStruct.empty();
}