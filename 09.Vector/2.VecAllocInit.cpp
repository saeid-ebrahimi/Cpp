
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
	vector<double> vec;
	//cout << vec;  // syntax error
	vec.push_back(12.6);
	vec[0] = 6.35;
	//vec[3] = 6.59; //we encounter exception
	//cout << vec[3] << endl; //we encounter exception

	vector<float> vec_float(4);
	cout << vec_float[2] << endl;
	vector<double> vec_double(6); 
	cout << vec_double[2] << endl;
	vector<int> vec_int(3);
	cout << vec_int[1] << endl;
	//cout << vec_int[9] << endl; //we encounter exception
	vec_int[0] = 12.63; vec_int[1] = 5/2;
	vec_int[2] = 36;
	cout << vec_int[1] << endl;
	//vec_int[2] = "hit"; //syntax error

	vector<string> philosopher(4);
	philosopher[0] = "Kant";
	philosopher[1] = "Plato";
	philosopher[2] = "Hume";
	philosopher[3] = "Kierkegaard";

	//philosopher[1] = 3.2; // syntax error
	vector<double> vd(100, 2.36);

			

}
