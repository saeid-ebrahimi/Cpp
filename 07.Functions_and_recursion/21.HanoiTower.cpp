
#include "stdafx.h"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

// definition of the three pegs 
vector<int> peg_a;
vector<int> peg_b;
vector<int> peg_c;

void print_peg(vector<int> peg)
{
	for (int i = 0; i < peg.size(); i++)
		cout << peg[i] << " ";
	cout << endl;
}

void print_pegs()
{
	cout << "A: ";
	print_peg(peg_a);
	cout << "B: ";
	print_peg(peg_b);
	cout << "C: ";
	print_peg(peg_c);
}

void move(vector<int>& from_peg, vector<int>& to_pig)
{
	to_pig.push_back(from_peg.back());
	from_peg.pop_back();
	print_pegs();
}

void hanoi(vector<int>& from, vector<int>&to, vector<int>& _using, int num_of_discs)
{
	if (num_of_discs == 1)
		move(from, to);
	else
	{
		hanoi(from, _using, to, num_of_discs - 1);
		move(from, to);
		hanoi(_using, to, from, num_of_discs - 1);
	}
}
int main()
{
	int num_of_discs;
	cout << "how many discs? ";
	cin >> num_of_discs;
	for (int i = num_of_discs; i >= 1; i--)
		peg_a.push_back(i);

	print_pegs();
	hanoi(peg_a, peg_b, peg_c, num_of_discs);	
}