

//in following code we want to find length of string

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int str_len(string in_string);
void test_program();
string read_data();

int main()
{
	test_program();

	/*
	int number = read_data();
	cout << dec_to_bin(number) << endl;	
	*/
}

string read_data()
{
	string str;
	cout << "Enter a string : " << endl;
	cin >> str;
	return str;
}
void test_program()
{
	

	for (int j = 0; j < 200; j++)
	{
		
		int const len = rand() % 20;
		string inp;
		inp.resize(len);
		for (int i = 0; i < len; i++)
		{
			inp[i] = (rand() % 92) + 32;
			cout << inp[i] << "";
		}
		cout << "  string length is: " <<inp.length()<< " code result is: " <<str_len(inp) <<endl ;
		
	}

}
int str_len(string in_string)
{
	int cnt = 0;
	while (in_string[cnt] != '\0')
	{
		cnt++;
	}
	return cnt;
}