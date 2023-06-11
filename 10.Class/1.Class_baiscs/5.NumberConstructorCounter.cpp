
#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

static class Number
{
public:
	Number() { num++; };
	~Number() { num--; };
	inline static int get_num() { return num; };
private:
	static int num;

};
int Number::num = 0;

int main()
{
	Number num1;
	Number num2;
	cout << Number::get_num() << endl;
	cout << Number().get_num() << endl;
	Number* num4 = new Number();
	cout << num4->get_num() << endl;
	delete num4;
	cout << Number::get_num() << endl;
}
