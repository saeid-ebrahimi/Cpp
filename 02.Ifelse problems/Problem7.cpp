// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double edge1 = 0, edge2, edge3;
	cout << "Please Enter edges dimension : ";
	cin >> edge1 >> edge2 >> edge3;
	if (edge1 > 0 && edge2 > 0 && edge3 > 0)
	{
		if (edge1 == edge2 && edge2 == edge3)
			cout << "Equilateral Triangle " << endl;
		else if (edge1 == edge2 || edge2 == edge3 || edge3 == edge1)
			cout << "Isosceles Triangle " << endl;
		else if (edge1 != edge2 && edge1 != edge3)
			cout << "Scalence Triagle " << endl;
	}
	else
		cout << "Invalid input" << endl;
	return 0;
}

