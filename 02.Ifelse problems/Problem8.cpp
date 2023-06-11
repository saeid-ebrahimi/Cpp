#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int edge1, edge2, edge3;
	cout << "Please Enter edges dimension : ";
	cin >> edge1 >> edge2 >> edge3;
	//max = edge1 > edge2 ? edge1 : edge2;
	if (edge1 > 0 && edge2 > 0 && edge3 > 0)
	{
		if (edge1*edge1 == edge2*edge2 + edge3*edge3)
			cout << "Surface is : " << 0.5*edge2*edge3 << endl;
		else if (edge2*edge2 == edge1*edge1 + edge3*edge3)
			cout << "Surface is : " << 0.5*edge1*edge3 << endl;
		else if (edge3*edge3 == edge1*edge1 + edge2*edge2)
			cout << "Surface is : " << 0.5*edge2*edge3 << endl;
		else
			cout << "Perimiter is : " << edge1 + edge2 + edge3 << endl;
	}
	else
		cout << "Invalid input" << endl;
	return 0;
}

