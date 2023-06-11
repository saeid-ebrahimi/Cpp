#include "stdafx.h"
#include <iostream>

using namespace std;

//Template class demo with user defined object and double and float pointers.
template<class myclass, int myint, double* mydouble, float* myfloat>
class nonType {

public:
	nonType(myclass mc) : myc(mc), t(myint), d(*mydouble), f(*myfloat) {
		cout << "nonType constructor called. \n" << endl;
	}

	void printnonType() {
		cout << "myclass.otpint is " << myc.otpint << " t is " << t << " d is " << d << " f is " << f << endl;
	}

private:
	myclass myc;
	int t;
	double d;
	float f;
};


//Template class demo with user defined object and int parameter with default value.
template<class myclass, int myint = 0>
class nonTypedefault {

public:
	nonTypedefault(myclass mc) : myc(mc), t(myint) {
		cout << "nonTypedefault constructor called. \n" << endl;
	}

	void printnonType() {
		cout << "myclass.otpint is " << myc.otpint << " t is " << t << endl;
	}

private:
	myclass myc;
	int t;
};


class objectToPass {

public:
	int otpint;
};


double md = 8.8;
float mf = 7.777777f;
int main() {

	objectToPass otp;
	otp.otpint = 5;

	nonTypedefault<objectToPass> defaultParams(otp);
	nonType<objectToPass, 9, &md, &mf> explicitParams(otp);

	cout << "nonType with default params is ";
	defaultParams.printnonType();
	cout << endl;

	cout << "nonType with explicit params is ";
	explicitParams.printnonType();
	cout << endl;


	return 0;
}
