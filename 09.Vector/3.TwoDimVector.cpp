
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<vector<int>> twodVec(4);
	twodVec[0].push_back(12);
	twodVec[0].push_back(17);
	twodVec[0].push_back(11);
	twodVec[1].push_back(1);
	twodVec[1].push_back(7);
	twodVec[2].push_back(90);
	twodVec[3].push_back(77);
	twodVec[3].push_back(56);

	vector<vector<double>> twodVect;
	vector<double> doVec;
	for (int i = 0; i < 10; i++)
	{
		doVec.push_back(i / 20.0);
	}
	for (int i = 0; i < 5; i++)
	{
		twodVect.push_back(doVec);
	}
	vector<vector<double>> tdimVec(3, vector<double>(4,2.36));
	tdimVec[1][0] = 12.54;
	
}