#include "stdafx.h"
#include <iostream>
#include "Table.h"
#include "Ball.h"

int main()
{
	Table t(100, 50);
	Ball b(10, 20, 25,5, &t);
	b.move(10);

	return 0;
}