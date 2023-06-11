
#include "stdafx.h"
#include <iostream>
#include <cmath>

#define SIZE 8

using std::cin;
using std::cout;
using std::endl;

int queen_col_in_row[SIZE]; //column that exist queen in it's row

bool threat(int r1, int c1, int r2, int c2)
{
	return (r1 == r2 || c1 == c2 || abs(r2 - r1) == abs(c2 - c1));
}
bool safe_to_put_at(int row, int col)
{
	for (int prev_row = 0; prev_row < row ; prev_row++)
		if (threat(row, col, prev_row, queen_col_in_row[prev_row]))
			return false;
	return true;
}
void print_board()
{
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			cout << (col == queen_col_in_row[row] ? "QQ" : "..");
		cout << endl;
	}
	
}
bool solve(int row = 0)
{
	// uncomment the following two lines for debugging: 
	//cout << row << endl;
	//print_board();

	if (row == SIZE)
		return true;
	for (int col = 0; col < SIZE; col++)
	{
		if (safe_to_put_at(row, col))
		{
			queen_col_in_row[row] = col;
			if (solve(row + 1))
				return true;
			queen_col_in_row[row] = 0;
		}
	}
	return false;
}  


int main()
{
	for (int row = 0; row < SIZE; row++)
		queen_col_in_row[row] = -1;
	if (solve())
		print_board();
}