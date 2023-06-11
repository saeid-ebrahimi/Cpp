


#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;



int main()
{
	char str1[100], str2[100];
	cin >> str1;
	cin >> str2;
	char* str1_ptr = str1;
	char* str2_ptr = str2;
	while (*str1_ptr != '\0')
	{
		str1_ptr++;
	}
	while (*(str2_ptr-1) != '\0')
	{
		*str1_ptr = *str2_ptr;
		str1_ptr++;
		str2_ptr++;
	}
	
	cout << str1 << endl;
}
