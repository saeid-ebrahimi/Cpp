
#include "stdafx.h"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

	void swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	void selection_sort(vector<int> &a)
	{
		int i, j, min_idx;
		for (int i = 0; i < a.size(); i++)
		{
			min_idx = i;
			for (int j = i + 1; j < a.size(); j++)
			{
				if (a[j] < a[min_idx])
					min_idx = j;
			}
			swap(a[i], a[min_idx]);
		}
	}
	void print_list(vector<int> a)
	{
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << " ";
		cout << endl;
	}


int main()
{
	vector<int> a;
	int x;
	while (cin >> x)
		a.push_back(x);
	selection_sort(a);
	print_list(a);
}
