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
int main()
{

	// iterate array of ints with a pointer.
	cout << "Traverse int array with pointer " << endl;
	const int SIZE = 3;
	int intarray[SIZE];
	intarray[0] = 1;
	intarray[1] = 2;
	intarray[2] = 3;
	int* endintarray = intarray + SIZE;
	for (int* ptr = intarray; ptr < endintarray; ptr++)
	{
		cout << *ptr << endl;
	}
	cout << endl;
	// istreambuf demo
	//std::istream_iterator<int> is(cin);
	
	std::istreambuf_iterator<char> isbuf(cin.rdbuf());
	std::istreambuf_iterator<char> isbeos;
	std::string mystring;

	cout << "please enter some text and the return key when finished!" << endl;
	while (!isbuf.equal(isbeos) && *isbuf != '\n')
	{
		mystring += *isbuf;
		isbuf++;
	}
	cout << '\n' << "the text you entered was" << mystring.c_str() << "\n\n";
	
	//istream example
	int val1, val2;
	cout << "Please enter two integer: ";

	std::istream_iterator<int> iseos; //end of stream iterator
	std::istream_iterator<int> is(cin); //stdin iterator

	if (is != iseos && *is != '\n')
	{
		val1 = *is;
	}
	++is;
	if (is != iseos && *is != '\n')
	{
		val2 = *is;
	}

	std::cout << "\n" << "you entered values: " << val1 << " and " << val2 << "\n\n";
	
	//forward iterator 
	std::forward_list<int> fwdlist;
	std::forward_list<int>::iterator fwdlistiter;

	fwdlist.push_front(3);
	fwdlist.push_front(2);
	fwdlist.push_front(1);

	cout << "Forward iterator traversal of forward_list. " << endl;
	for (fwdlistiter = fwdlist.begin(); fwdlistiter != fwdlist.end(); fwdlistiter++)
		cout << (*fwdlistiter) << endl;

	cout << endl;

	//Create vetor and list for iterator examples.
	std::vector<int> v;
	std::vector<int>::iterator viter;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	viter = v.begin();
	viter += 2;
	cout << *viter << endl;
	cout << endl;

	viter = v.begin();
	viter += 2;
	cout << "Random access iterator vector begining + offset 2 is " << *viter << endl;
	std::list<int> lst;
	std::list<int>::iterator lstiter;
	std::list<int>::reverse_iterator revlstiter;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	//bidirectional iterator example
	//Forward Traversal 
	cout << "forward traversal of list." << endl;
	for (lstiter = lst.begin(); lstiter != lst.end(); lstiter++)
	{
		cout << *lstiter << endl;
	}

	cout << endl;
	//Reverse Traversal
	cout << "reverse traversal of list." << endl;
	for (revlstiter = lst.rbegin(); revlstiter != lst.rend(); revlstiter++)
	{
		cout << *revlstiter << endl;
	}
	cout << endl;

	for each (int element in lst)
	{
		cout << element << endl;
	}
	for (int element : lst) {
		cout << element << endl;
	}
    return 0;
}

