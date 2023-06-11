
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
int binary_search(vector<int> list, int from, int to, int key)
{
	if (list.size() == 0) // empty list
		return -1;
	if (from > to) //we can't find key
		return -1;
	int mid = (from + to) / 2;
	if (list[mid] == key)
		return mid;
	else if (list[mid] < key)
		return binary_search(list, mid + 1, to, key);
	else
		return binary_search(list, from, mid - 1, key);
}
int main()
{
	
	vector<int> nums;
	int num;
	int key;
	cout << "enter a key to find: ";
	cin >> key;
	cout << "enter a list of nums: ";
	while (cin >> num)
		nums.push_back(num);
	sort(nums.begin(), nums.end());
	cout << "sorted list is :" << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	int idx = binary_search(nums, 0, nums.size(), key);
	if (idx == -1)
		cout << "key not found" << endl;
	else
		cout << "key is found at index " << idx << endl;
}