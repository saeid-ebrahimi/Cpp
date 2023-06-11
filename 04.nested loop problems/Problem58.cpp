#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	for (int i = 20; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}

