#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	char ch;
	cout << "Enter the Character : ";
	cin >> ch;
	bool vowel_condition = ch == 'a' || ch == 'e' || ch == 'i'
						  || ch == 'o' || ch == 'u' || ch == 'y'
						  || ch == 'A' || ch == 'E' || ch == 'I' 
					      || ch == 'O' || ch == 'U' || ch == 'Y';
	if (vowel_condition)
		cout << "vowel letter" << endl;
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		cout << "consonant letter" << endl;
	else if (ch >= '0' && ch <= '9')
		cout << "number " << endl;
	else
		cout << "especial characters" << endl;
	return 0;
}

