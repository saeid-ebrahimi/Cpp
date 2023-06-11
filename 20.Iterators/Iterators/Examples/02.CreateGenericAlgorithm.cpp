// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <istream>
#include <iterator>
#include <string>
#include <list>
#include <vector>
#include <forward_list>
using std::cout;
using std::endl;
using std::cin;
template<typename InputIterator,typename valueType>
InputIterator findfirstinstance(InputIterator iterBegin, InputIterator iterEnd, const valueType& findEle)
{
	while (iterBegin != iterEnd && *iterBegin != findEle)
	{
		++iterBegin;
	}
	return iterBegin;
}
template<class InputIterator, class OutputIterator>
OutputIterator mergeSortedContainers(InputIterator lhsBegin, InputIterator lhsEnd,
	InputIterator rhsBegin, InputIterator rhsEnd, OutputIterator result)
{
	// Copy elements retaining order until end of one container.
	while (lhsBegin != lhsEnd && rhsBegin != rhsEnd)
	{
		if (*lhsBegin <= *rhsBegin)
		{
			*result = *lhsBegin;
			++lhsBegin;
		}
		else
		{
			*result = *rhsBegin;
			++rhsBegin;
		}
		++result;
	}
	//Copy remaining elements
	while (lhsBegin != lhsEnd)
	{
		*result = *lhsBegin;
		++lhsBegin;
		++result;
	}
	while (rhsBegin != rhsEnd)
	{
		*result = *lhsBegin;
		++lhsBegin;
		++result;
	}
	return result;
}
template<class ForwardIterator, typename ElementType>
void findandreplace(ForwardIterator iterBegin, ForwardIterator iterEnd, const ElementType& oldEle,
	const ElementType& newEle)
{
	while (iterBegin != iterEnd)
	{
		if (*iterBegin == oldEle) 
		{
			*iterBegin = newEle;
			//break;
		}
		++iterBegin;
	}
}
template<class BidirectionalIterator, class OutputIterator>
OutputIterator reverseCopy(BidirectionalIterator iterBegin, BidirectionalIterator iterEnd,
	OutputIterator result)
{
	// copy elements from iterEnd to results container.
	while (iterBegin != iterEnd)
	{
		--iterEnd;
		*result= *iterEnd;
		result++;
	}
	return result;
}

template<class RandomAccessIterator>
void randomise(RandomAccessIterator iterBegin, RandomAccessIterator iterEnd)
{
	while (iterBegin < iterEnd)
	{
		iter_swap(iterBegin, iterBegin + rand() % (iterEnd - iterBegin));
		//randomInteger(iterEnd-iterBegin)
		++iterBegin;
	}

}
int main()
{
	//Containers used as to apply algorithms to.
	std::forward_list<int> firstList = { 34,77,16,2 };
	std::forward_list<int> secondList = { 35,76,18,2 };
	
	std::list<int> list1 = { 34,77,16,2,35,76,18,2 };
	
	std::vector<int> resultList(8);

	//Sort containers.
	firstList.sort();
	secondList.sort();

	//Find first instance example.
	cout << "find first instance of 16 in firstList and 76 in secondList is " << *findfirstinstance(firstList.begin(), firstList.end(), 16) << "  " << *findfirstinstance(secondList.begin(), secondList.end(), 76) << "\n";
	cout << endl;

	//mergeSortedContainers example.
	cout << "Results of calling mergeSortedContainers with firstList and secondList are." << "\n";
	mergeSortedContainers(firstList.begin(), firstList.end(), secondList.begin(), secondList.end(), resultList.begin());

	for (std::vector<int>::iterator it = resultList.begin(); it != resultList.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n\n";
	//findandreplace exampl.
	cout << "Results of calling findandreplace on firstList with values 16 and 23 " << endl;
	findandreplace(firstList.begin(), firstList.end(), 16, 23);
	for (std::forward_list<int>::iterator it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n\n";
	cout << "Results of calling findreplace on secondList with values 76 and 1006" << "\n";
	findandreplace(secondList.begin(), secondList.end(), 76, 1006);
	for (std::forward_list<int>::iterator it = secondList.begin(); it != secondList.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n\n";

	//reverseCopy example.
	cout << "Result of calling reverseCopy on firstList is " << endl;
	resultList.empty();
	resultList.resize(list1.size());
	reverseCopy(list1.begin(), list1.end(), resultList.begin());
	for (std::vector<int>::iterator it = resultList.begin(); it != resultList.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n\n";

	//randomise example.
	cout << "Calling randomise on sorted vector " << endl;
	list1.sort();
	std::vector<int> temp(list1.begin(), list1.end());
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); it++)
		cout << *it << "  ";
	cout << endl;
	cout << "Results after calling randomise on sorted vector are " << endl;
	randomise(temp.begin(), temp.end());
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); it++)
		cout << *it << "  ";
	cout << "\n\n";
    return 0;
}

