#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Body
{
public:
	Body() : str("") {}

	void printBody() {
		cout << "printBody called. \n";
	}

	void updateTxt(string s) {
		str = s;
	}

	void printTxt() {
		cout << str << "\n";
	}

private:
	string str;
};
class Handle {
public:
	Handle() : bdy(new Body()) {}

	void handleBody(string ss="") {
		bdy->printBody();
		bdy->updateTxt(ss);
		bdy->printTxt();
	}

	~Handle() {
		if (bdy) {
			delete bdy;
		}
	}

private:
	Body* bdy;
};
int main() {

	Handle hand;
	hand.handleBody("Main function call.");

	return 0;
}