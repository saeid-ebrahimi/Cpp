// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
template<size_t dimcount, typename T,size_t vecsize>
class multiVector {
	
public:
	multiVector() :vec(vecsize)
	{
		multiVector<dimcount - 1, T, vecsize>();
	}
	const multiVector<dimcount -1,T,vecsize>& operator[] (int m)const
	{
		return vec.at(m);
	}
	multiVector<dimcount - 1, T, vecsize>& operator[] (int m)
	{
		return vec.at(m);
	}
private:
	vector<multiVector<dimcount - 1, T, vecsize>> vec;
};
template<typename T,size_t vecSize>
class multiVector<1, T, vecSize>
{

public:
	multiVector() :vec(vecSize) {}
	T& operator[](const int index)
	{
		return vec[index];
	}
	T& operator[](int m)const
	{
		return vec[m];
	}
private:
	vector<T> vec;
};

int main()
{
	vector<vector<vector<int>>> vec;
	// fill content
	for (int i = 0; i < 5; i++)
	{
		vector<vector<int>> vv;
		for (int j = 0; j < 10; j++)
		{
			vector<int> ve;
			for (int t = 0; t < 3; t++)
			{
				ve.push_back(t);
			}
			vv.push_back(ve);
		}
		vec.push_back(vv);
	}
	//Print contents
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int t = 0; t < 3; t++)
			{
				cout << " element index " << t << " is " << vec[i][j][t] << endl;
			}
		}
	}
	cout << "\n\n";
	multiVector<4, int, 5> vec4;
	cout << "accessing vec4[1][2][3][4][4] = 7 \n";
	vec4[1][2][3][4] = 7;
	cout << "reading vec4[1][2][3][4][4] is ";
	cout << vec4[1][2][3][4] << endl;

	multiVector<30, int, 80> bigVec;

	cout << "\n\n";
	return 0;
}

