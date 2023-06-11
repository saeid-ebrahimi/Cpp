#include "stdafx.h"
#include <iostream>

using namespace std;

static class Calculate_weight
{
public:
	Calculate_weight();
	Calculate_weight(double weight);
	static void set_weight(double weight);
	static double calc_weight_in_kg();
	static double calc_weight_in_kg(double weight);
	static double calc_weight_in_g();
	static double calc_weight_in_g(double weight);
private:
	static double _weight;
	
};
double Calculate_weight::_weight = 0;
Calculate_weight::Calculate_weight()
{
	_weight = 0;
}
Calculate_weight::Calculate_weight(double weight)
{
	set_weight(weight);
}


void Calculate_weight::set_weight(double weight)
{
	if (weight > 0)
		_weight = weight;
	else
	{
		cout << "invalid parameter for weight!" << endl;
		_weight = 0;
	}
}
double Calculate_weight::calc_weight_in_kg()
{
	return (_weight*0.453595);
}
double Calculate_weight::calc_weight_in_kg(double weight)
{
	set_weight(weight);
	return (_weight*0.453595);
}

double Calculate_weight::calc_weight_in_g()
{
	return (_weight*0.453595)*1000;
}
double Calculate_weight::calc_weight_in_g(double weight)
{
	set_weight(weight);
	return (_weight*0.453595)*1000;
}
int main()
{
	Calculate_weight cw1;
	static Calculate_weight cw2(120.5);
	cout << cw1.calc_weight_in_kg(150) << endl;
	cout << cw2.calc_weight_in_kg() << endl;
	cw1.set_weight(160.5);
	cout << cw1.calc_weight_in_kg() << endl;
	cout << cw2.calc_weight_in_kg() << endl;
	cout << Calculate_weight(20).calc_weight_in_kg() << endl;
	cout << Calculate_weight::calc_weight_in_kg(140.6) << endl;
	return 0;
}