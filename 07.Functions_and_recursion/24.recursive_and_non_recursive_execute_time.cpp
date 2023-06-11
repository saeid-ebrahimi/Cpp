
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

namespace non_rec
{
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
}
namespace rec
{
	void swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int min_index(vector<int> list, int i)
	{
		if (i == list.size() - 1)
			return i;
		int min_idx_rest = min_index(list, i + 1);
		if (list[i] < list[min_idx_rest])
			return i;
		else
			return min_idx_rest;
	}
	// O(n) = n^2
	void selection_sort(vector<int>& list, int i = 0)
	{
		if (i == list.size())
			return;
		int j = min_index(list, i);
		swap(list[i], list[j]);
		selection_sort(list, i + 1);
	}

	void print_list(vector<int> list, int i = 0)
	{
		if (i == list.size())
			cout << endl;
		else
		{
			cout << list[i] << " ";
			print_list(list, i + 1);
		}
	}
}
int main()
{
	clock_t time;
	vector<int> a;
	int x;
	while (cin >> x)
		a.push_back(x);
	time = clock();
	rec::selection_sort(a);
	rec::print_list(a);
	time = clock() - time;
	cout << "rec: " << (1000 * time) / CLOCKS_PER_SEC << " ms"<< endl;

	time = clock();
	non_rec::selection_sort(a);
	non_rec::print_list(a);
	time = clock() - time;
	cout << "non_rec: " << (1000 * time) / CLOCKS_PER_SEC<< " ms" << endl;
}