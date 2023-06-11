#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int N = 20;
class Poly
{
public:

	Poly(int deg, double coe[N]);
	Poly derivative();
	double operator()(const	double& x)const;
	Poly operator+(const Poly& polynom)const;
	Poly operator+(const double d) const;
	Poly& operator+=(const Poly& polynom);
	Poly& operator+=(const double d);
	Poly operator-(const Poly& polynom)const;
	Poly operator-(const double d)const;
	Poly& operator-= (const Poly& polynom);
	Poly& operator-=(const double d);
	Poly operator*(const Poly& polynom)const;
	Poly operator*(const double d)const;
	Poly& operator*=(const Poly& polynom);
	Poly& operator*=(const double d);
	bool operator== (const Poly& polynom)const;
	bool operator== (const double d)const;
	
	friend Poly operator+(const double d ,const Poly& polynom);
	friend Poly operator-(const double d, const Poly& polynom);
	friend Poly operator*(const double d, const Poly& polynom);
	friend bool operator== (const double d,const Poly& polynom);
	friend ostream& operator<< (ostream& output, const Poly& polynom);
	friend istream& operator >> (istream& input, Poly& polynom);
private:
	int degree;
	double coefficients[N];
};

Poly::Poly(int deg, double coe[N])
{
	degree = deg;
	for (int i = deg; i >= 0; i--)
		coefficients[i] = coe[i];
	for (int i = N - 1; i > deg; i--)
		coefficients[i] = 0;
}

Poly Poly::derivative()
{
	Poly der(degree-1, coefficients);
	for (int i = 0; i < degree -1; i++)
	{
		der.coefficients[i] = (degree - i)*coefficients[i];
	}
	return der;
}

double Poly::operator()(const double& x)const
{
	double tmp = x;
	double val = 1;
	double ans = 0;
	for (int i = degree; i >= 0; i--)
	{
		for (int j = i; j >= 1; j--)
			val *= tmp;
		ans += coefficients[i] * val;
		val = 1;
	}
	return ans;
}

Poly Poly::operator+(const Poly& polynom)const
{
	int deg;
	double c[N];
	if (degree >= polynom.degree)
		deg = degree;
	else
		deg = polynom.degree;
	for (int i = deg; i >= 0; i--)
	{
		c[i] = coefficients[i] + polynom.coefficients[i];
	}
	return Poly(deg, c);
}

Poly Poly::operator+(const double d)const
{
	double c[N];
	for (int i = degree; i >= 0; i--)
	{
		c[i] = coefficients[i] ;
	}
	c[degree] += d;
	return Poly(degree, c);
}
Poly operator+(const double d, const Poly& polynom)
{
	double c[N];
	int deg = polynom.degree;
	for (int i = deg; i >= 0; i--)
	{
		c[i] = polynom.coefficients[i];
	}
	c[deg] += d;
	return Poly(deg, c);
}
Poly& Poly::operator+=(const Poly & polynom)
{
	if (degree <= polynom.degree)
		degree = polynom.degree;
	for (int i = degree; i >= 0; i--)
	{
		coefficients[i] += polynom.coefficients[i];
	}
	return *this;
}

Poly& Poly::operator+=(const double d)
{
	coefficients[degree] += d;
	return *this;
}

Poly Poly::operator-(const Poly& polynom)const
{
	int deg;
	double c[N];
	if (degree >= polynom.degree)
		deg = degree;
	else
		deg = polynom.degree;
	for (int i = deg; i >= 0; i--)
	{
		c[i] = coefficients[i] - polynom.coefficients[i];
	}
	return Poly(deg, c);
}

Poly Poly::operator-(const double d)const
{
	double c[N];
	for (int i = degree; i >= 0; i--)
	{
		c[i] = coefficients[i];
	}
	c[degree] -= d;
	return Poly(degree, c);
}

Poly operator-(const double d, const Poly& polynom)
{
	double c[N];
	int deg = polynom.degree;
	for (int i = deg; i >= 0; i--)
	{
		c[i] = polynom.coefficients[i];
	}
	c[deg] -= d;
	return Poly(deg, c);
}

Poly& Poly::operator-=(const Poly & polynom)
{
	if (degree <= polynom.degree)
		degree = polynom.degree;
	for (int i = degree; i >= 0; i--)
	{
		coefficients[i] -= polynom.coefficients[i];
	}
	return *this;
}

Poly& Poly::operator-=(const double d)
{
	coefficients[degree] -= d;
	return *this;
}

Poly Poly::operator*(const Poly& polynom)const
{
	int deg = degree + polynom.degree;
	double c[N] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	for (int i = degree; i >= 0; i--)
		for (int j = polynom.degree; j >= 0; j--)
			if (c[i + j] == 0)
				c[i + j] = coefficients[i] * polynom.coefficients[j];
			else
				c[i + j] += coefficients[i] * polynom.coefficients[j];
	return Poly(deg, c);
}

Poly Poly::operator*(const double d) const
{
	double c[N];
	for (int i = degree; i >= 0; i--)
	{
		c[i] = coefficients[i] * d;
	}
	return Poly(degree, c);
}

Poly operator*(const double d, const Poly& polynom)
{
	double c[N];
	for (int i = polynom.degree; i >= 0; i--)
	{
		c[i] = polynom.coefficients[i] * d;
	}
	return Poly(polynom.degree, c);
}

Poly& Poly::operator*=(const Poly & polynom)
{
	int deg = degree + polynom.degree;
	double c[N] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	for (int i = degree; i >= 0; i--)
		for (int j = polynom.degree; j >= 0; j--)
			if (c[i + j] == 0)
				c[i + j] = coefficients[i] * polynom.coefficients[j];
			else
				c[i + j] += coefficients[i] * polynom.coefficients[j];
	degree = deg;
	for (int i = 0; i < degree; i++)
	{
		coefficients[i] = c[i];
	}
	return *this;
}

Poly& Poly::operator*=(const double d)
{
	for (int i = degree; i >= 0; i--)
	{
		coefficients[i] *= d;
	}
	return *this;
}

bool Poly::operator==(const Poly & polynom) const
{
	if (degree != polynom.degree)
		return false;
	else
	{
		for (int  i = 0; i < degree; i++)
		{
			if (coefficients[i] != polynom.coefficients[i])
				return false;
		}
		return true;
	}
	
}

bool Poly::operator==(const double d)const
{
	if (degree == 0)
		if (coefficients[0] == d)
			return true;
	return false;
}

bool operator== (const double d, const Poly& polynom)
{
	if (polynom.degree == 0)
		if (polynom.coefficients[0] == d)
			return true;
	return false;
}

ostream& operator<<(ostream& output ,const Poly& polynom)
{
	for (int i = polynom.degree; i >= 0; i--)
	{
		output << polynom.coefficients[polynom.degree - i]; 
		if (i != 0)
			output << "x^" << i << " + ";
	}
	return output;
}

istream& operator >> (istream& input, Poly& polynom)
{
	string in_str;
	input >> in_str;
	int hat_pos = in_str.find('^');
	int plus_pos = in_str.find('+');
	int x_pos = in_str.find('x');
	polynom.degree = stoi(in_str.substr(hat_pos + 1, plus_pos));
	for (int i = 0; i < polynom.degree; i++)
	{
		polynom.coefficients[i] = stoi(in_str.substr(0, x_pos));
		in_str = in_str.substr(plus_pos + 1);
		x_pos = in_str.find('x');
		plus_pos = in_str.find('+');
	}
	polynom.coefficients[polynom.degree] = stoi(in_str.substr(0));
	return input;
}

int main()
{
	double c[3] = { 3,2,5 };
	double d[2] = { 6,4 };
	Poly pN(2, c), poly(1, d);
	
	cout << pN << endl;
	cout << pN.derivative() << endl;
	cout << poly << endl;
	cout << poly + 8 << endl;
	Poly p = pN + poly;
	cout << p << "\t" << (pN += poly) << endl;
	cin >> poly;
	cout << poly << endl;
	cout << pN << endl;
	p = pN + poly;
	cout << p << "\t" <<( pN += poly) << endl;
	Poly p1 = pN*poly;
	cout << p(2) << endl;
	cout << p1(1) << endl;
	return 0;
}

