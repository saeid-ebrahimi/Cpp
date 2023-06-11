#include "stdafx.h"
#include<iostream>
#include <string>
#include "CubeBox.h"
#include "CylenderBox.h"

using std::cout;
using std::endl;


int main()
{
	CylenderBox* cb = new CylenderBox(2, 4);
	CubeBox* cub = new CubeBox(3);
	cout << "cylender box: " << endl;
	cout << cb->get_volume() << endl;
	cout << cb->get_area() << endl;

	cout << "cube box:" << endl;
	cout << cub->get_volume() << endl;
	cout << cub->get_area() << endl;
	
}