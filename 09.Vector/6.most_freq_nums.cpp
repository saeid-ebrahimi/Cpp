
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
vector<int> most_freq(vector<int> nums);
int main()
{
	vector<int> nums;
	int num;
	while (cin >> num)
		nums.push_back(num);
	nums = most_freq(nums);
	cout << "most freauence num/s : ";
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << "  ";
	}
	cout << endl;
}

vector<int> most_freq(vector<int> nums)
{
	vector<int> most_freq_nums;
	int freq = 0;
	int max_freq = 1;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i; j < nums.size(); j++)
		{
			if (nums[i] == nums[j])
				freq++;
		}
		if (max_freq < freq)
		{
			for ( i = 0; i < most_freq_nums.size(); i++)
			{
				most_freq_nums.pop_back();
			}
			most_freq_nums.push_back(nums[i]);
			max_freq = freq;
		}
		else if (max_freq == freq)
			most_freq_nums.push_back(nums[i]);
		freq = 0;
	}
	return most_freq_nums;
}
