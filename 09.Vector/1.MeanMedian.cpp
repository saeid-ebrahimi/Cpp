
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<double> temps;
	double temp;
	// enter ctrl + d to continue
	while (cin >> temp)
		temps.push_back(temp);
	double sum = 0;
	for (int i = 0; i < temps.size(); i++)
		sum += temps[i];
	cout << "Mean temperature: " << sum / temps.size() << endl;
	std::sort(temps.begin(),temps.end());
	cout << "Median temperature: " << temps[temps.size() /2 ];
}
