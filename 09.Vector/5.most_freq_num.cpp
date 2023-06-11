
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int most_freq(vector<int> nums);
int main()
{
	vector<int> nums;
	int num;
	while (cin >> num)
		nums.push_back(num);
	
	cout << most_freq(nums) << endl;

}

int most_freq(vector<int> nums)
{
	int number;
	int freq = 0;
	int max_freq = 1;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i; j < nums.size(); j++)
		{
			if (nums[i] == nums[j])
				freq++;
		}
		if (max_freq <= freq)
		{
			number = nums[i];
			max_freq = freq;
		}
		freq = 0;
	}
	return number;
}
