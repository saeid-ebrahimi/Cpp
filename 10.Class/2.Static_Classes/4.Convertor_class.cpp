
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

static class Convertor
{
public:
	Convertor() {_inch = 0; _foot = 0;};
	// Convertor(double foot, double inch) :_inch(inch), _foot{ foot } {}; //nonstatic type error
	Convertor(double foot, double inch) { _inch = inch; _foot = foot; }
	inline static void set_values(double foot, double inch) { _inch = inch ; _foot = foot ; };
	inline static double ftom() { return 0.30448*_foot; };
	inline static double ftom(double foot ) {_foot = foot;return ftom();};
	inline static double itom() {return _inch / 12.0;};
	inline static double itom(double inch) { _inch = inch; return itom(); }
	~Convertor() {};

private:
	static double _inch;
	static double _foot;
};
double Convertor::_inch = 0;
double Convertor::_foot = 0;
int main()
{
	Convertor con;
	con.set_values(10, 15);
	cout << con.ftom() << '\t' << con.itom() << endl;
	cout << Convertor::ftom(10) << '\t' << Convertor::itom(15) <<endl;
	cout << Convertor(10, 15).ftom() <<'\t'<< Convertor(10, 15).itom()<< endl;
}