// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

template<typename Container>
void printContainer(Container begin, Container end)
{
	//Generic Container Printer
	for (Container it = begin; it != end; it++)
	{
		cout << *it << " ";
	}
}
// Specialize print map function as nee to access maps pairs using index operator.

template<typename Container>
void printMap(Container begin, Container end)
{
	// Generic container printer 
	for (Container it = begin; it != end; it++)
	{
		cout << it->first << ": " << it->second << " ";
	}
}

// Helper function to accumulate map pairs
int mymapacc(int lhs, const std::pair<char, int>& rhs)
{
	return lhs + rhs.second;
}

int main()
{
	// Data elements
	int numbersarray[] = { 1,2,3,7,5,8,9,10,5,4 };

	// Create Container
	vector<int> myvector(numbersarray, numbersarray + 10);

	list<int> mylist(numbersarray, numbersarray + 10);

	set<int> myset(numbersarray, numbersarray + 10);

	map<char, int> mymap;
	mymap.insert(std::make_pair('A', 2));
	mymap.insert(std::make_pair('B', 1));
	mymap.insert(std::make_pair('C', 3));
	mymap.insert(std::make_pair('D', 4));
	mymap.insert(std::make_pair('E', 8));
	mymap.insert(std::make_pair('F', 6));
	mymap.insert(std::make_pair('G', 5));
	mymap.insert(std::make_pair('H', 7));
	mymap.insert(std::make_pair('I', 10));
	mymap.insert(std::make_pair('J', 9));

	deque<int> mydeque(numbersarray, numbersarray + 10);

	cout << "Container elements before sorting." << endl;
	
	cout << "Vector: ";
	printContainer(myvector.begin(), myvector.end());
	cout << endl;

	cout << "List: ";
	printContainer(mylist.begin(), mylist.end());
	cout << endl;

	cout << "Set: ";
	printContainer(myset.begin(), myset.end());
	cout << endl;

	cout << "Map: ";
	printMap(mymap.begin(), mymap.end());
	//printContainer(mymap.begin(), mymap.end());
	cout << endl;

	cout << "Deque: ";
	printContainer(mydeque.begin(), mydeque.end());
	cout << endl;

	cout << endl;
	// Count Container elements and print
	cout << "5 is in myvector ";
	cout << count(myvector.begin(), myvector.end(), 5);
	cout << " times" << endl;
	
	cout << "5 is in mylist ";
	cout << count(mylist.begin(), mylist.end(), 5);
	cout << " times" << endl;

	cout << "5 is in myset ";
	cout << count(myset.begin(), myset.end(), 5);
	cout << " times" << endl;
	
	cout << "5 is in mymap ";
	cout << mymap.count('G');
	cout << " times" << endl;

	cout << "5 is in mydeque ";
	cout << count(mydeque.begin(), mydeque.end(), 5);
	cout << " times" << endl;

	cout << endl;

	// min values

	cout << "myvector min value is ";
	cout << *min_element(myvector.begin(), myvector.end()) << endl;

	cout << "mylist min value is ";
	cout << *min_element(mylist.begin(), mylist.end()) << endl;

	cout << "myset min value is ";
	cout << *min_element(myset.begin(), myset.end()) << endl;

	cout << "mymap min value is ";
	cout << min_element(mymap.begin(), mymap.end())->first << ": ";
	cout << min_element(mymap.begin(), mymap.end())->second<< endl;
	
	cout << "mydeque min value is ";
	cout << *min_element(mydeque.begin(), mydeque.end()) << endl;
	cout << endl;

	//Max values.
	cout << "myvector max value is " << *max_element(myvector.begin(), myvector.end()) << endl;
	cout << "mylist max value is " << *max_element(mylist.begin(), mylist.end()) << endl;
	cout << "myset max value is " << *max_element(myset.begin(), myset.end()) << endl;
	cout << "mymap max value is " << max_element(mymap.begin(), mymap.end())->first << ": ";
	cout << max_element(mymap.begin(), mymap.end())->second << endl;
	cout << "mydeque max value is " << *max_element(mydeque.begin(), mydeque.end()) << endl;

	cout << endl;

	//Sorting

	sort(myvector.begin(), myvector.end());
	//List dosent have bi directional iterators so have to sort
	//Can provide our own comparison function to sort by.
	mylist.sort();
	sort(mydeque.begin(), mydeque.end());

	//Set and map are already sorted.

	cout << "Sorted myvector is ";
	printContainer(myvector.begin(), myvector.end());
	cout << endl;

	cout << "Sorted mylist is ";
	printContainer(mylist.begin(), mylist.end());
	cout << endl;

	cout << "Sorted myset is ";
	printContainer(myset.begin(), myset.end());
	cout << endl;

	cout << "Sorted mymap is ";
	printMap(mymap.begin(), mymap.end());
	cout << endl;

	cout << "Sorted mydeque is ";
	printContainer(mydeque.begin(), mydeque.end());
	cout << endl;

	cout << endl;
	// reverse 
	reverse(myvector.begin(), myvector.end());
	mylist.reverse();
	reverse(mydeque.begin(), mydeque.end());
	cout << "Reversed myvector is ";
	printContainer(myvector.begin(), myvector.end());
	cout << endl;

	cout << "Reversed mylist is ";
	printContainer(mylist.begin(), mylist.end());
	cout << endl;

	cout << "Cannot reverse myset as it is a set which is ordered by default. " << endl;

	cout << "Cannot reverse mymap as it is ordered by it's keys. " << endl;

	cout << "Reversed mydeque is ";
	printContainer(mydeque.begin(), mydeque.end());
	cout << endl;

	cout << endl;

	partial_sort(myvector.begin(), myvector.begin() + 5, myvector.end());
	partial_sort(mydeque.begin(), mydeque.begin() + 5, mydeque.end());

	cout << "Paritally sorted myvector is ";
	printContainer(myvector.begin(), myvector.end());
	cout << endl;

	cout << "There is no partial_sort for list." << endl;
	cout << "There is no partial_sort for set." << endl;
	cout << "There is no partial_sort for map." << endl;
	//printContainer(mylist.begin(), mylist.end());
	//cout << endl;

	cout << "Partially sorted mydeque is ";
	printContainer(mydeque.begin(), mydeque.end());
	cout << endl;

	cout << endl;

	// Accumulate 
	cout << "Accumulate algorithm on vector is ";
	cout << std::accumulate(myvector.begin(), myvector.end(), 200) << endl;

	cout << "Accumulate algorithm on list is ";
	cout << std::accumulate(mylist.begin(), mylist.end(), 200) << endl;

	cout << "Accumulate algorithm on deque is ";
	cout << std::accumulate(mydeque.begin(), mydeque.end(), 200) << endl;

	cout << "Accumulate algorithm on map is ";
	cout << std::accumulate(mymap.begin(), mymap.end(), 200, mymapacc) << endl;

	cout << "Accumulate algorithm on set is ";
	cout << std::accumulate(myset.begin(), myset.end(), 200) << endl;

	cout << endl;
	//Intersection
	int numbarray[] = { 1, 2 , 3 , 77 , 88 , 99 , 100 , 66, 55, 44 };

	//Create containers to find intersection.
	vector<int> othervec(numbarray, numbarray + 10);
	list<int> otherlist(numbarray, numbarray + 10);
	set<int> otherset(numbarray, numbarray + 10);
	map<char, int> othermap;
	othermap.insert(std::make_pair('A', 1));
	othermap.insert(std::make_pair('B', 2));
	othermap.insert(std::make_pair('C', 3));
	othermap.insert(std::make_pair('X', 5));
	othermap.insert(std::make_pair('Y', 6));
	othermap.insert(std::make_pair('Z', 4));
	othermap.insert(std::make_pair('Z', 7));
	othermap.insert(std::make_pair('Z', 8));
	othermap.insert(std::make_pair('Z', 10));
	othermap.insert(std::make_pair('Z', 9));
	deque<int> otherdeque(numbarray, numbarray + 10);

	//Containers to hold result.
	vector<int> resvec(10);
	list<int> reslist(10);
	deque<int> resdeque(10);
	set<int> resset;
	map<char, int> resmap;

	//Sort containers.
	sort(myvector.begin(), myvector.end());
	sort(othervec.begin(), othervec.end());

	otherlist.sort();
	mylist.sort();

	sort(mydeque.begin(), mydeque.end());
	sort(otherdeque.begin(), otherdeque.end());

	//Calculate intersections

	set_intersection(myvector.begin(), myvector.end(), othervec.begin(), othervec.end(), resvec.begin());
	set_intersection(mylist.begin(), mylist.end(), otherlist.begin(), otherlist.end(), reslist.begin());
	set_intersection(mydeque.begin(), mydeque.end(), otherdeque.begin(), otherdeque.end(), resdeque.begin());
	set_intersection(myset.begin(), myset.end(), otherset.begin(), otherset.end(), inserter(resset, resset.begin()));
	set_intersection(mymap.begin(), mymap.end(), othermap.begin(), othermap.end(), inserter(resmap, resmap.begin()), mymap.value_comp());

	
	cout << "Intersection of sorted vectors is ";
	printContainer(resvec.begin(), resvec.end());
	cout << endl;

	cout << "Intersection of sorted lists is ";
	printContainer(reslist.begin(), reslist.end());
	cout << endl;

	cout << "Intersection of sorted deques is ";
	printContainer(resdeque.begin(), resdeque.end());
	cout << endl;

	cout << "Intersection of sorted maps is ";
	printMap(resmap.begin(), resmap.end());
	cout << endl;

	cout << "Intersection of sorted sets is ";
	printContainer(resset.begin(), resset.end());
	cout << endl;

	cout << endl;



}