#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class explicitConversion {
public:
	explicit explicitConversion(float floatin) : convertValue{floatin } {};
	void printValue(const explicitConversion expC);
	float convertValue;
};

void explicitConversion::printValue(const explicitConversion expC) {
	std::cout << "The value of convertValue is : " <<
		expC.convertValue << std::endl;
}

class Conversion {
public:
	Conversion(float floatin) : convertValue{ floatin } {};
	void printValue(const Conversion expC);
	float convertValue;
};
void Conversion::printValue(const Conversion expC) {
	std::cout << "The value of convertValue is : " <<
		expC.convertValue << std::endl;
}

int main() {
	explicitConversion mycc(100.01);
	Conversion myc(64.06);

	mycc.printValue(mycc); //No conversion
	double myccdouble(53.53);
	mycc.printValue((explicitConversion)myccdouble); //Explicit conversion of double to float.
	//Conversion would be illegal with explicit hence wont work with mycc object of type explicitConversion.
	//mycc.printValue((Conversion)myccdouble);
	double mycdouble(23.23);
	myc.printValue(mycdouble); //Implicit conversion double to float.
		return 0;
}