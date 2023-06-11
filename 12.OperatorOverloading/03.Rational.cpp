
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Rational
{
public:
	Rational(int n, int d) :numerator(n), denominator(d) {}
	Rational(int n) :numerator(n), denominator(1) {}
	Rational operator+(Rational& r)const;
	Rational operator+(double d)const;
	Rational operator-(Rational& r)const;
	Rational operator-(double d)const;
	Rational operator*(Rational& r)const;
	Rational operator*(double d)const;
	Rational operator/(Rational& r)const;
	Rational operator/(double d)const;

	Rational & operator+=(Rational & r);
	Rational& operator+=(double d);
	Rational & operator-=(Rational & r);
	Rational& operator-=(double d);
	Rational & operator*=(Rational & r);
	Rational& operator*=(double d);
	Rational & operator/=(Rational & r);
	Rational & operator/=(double d);
	bool operator==(Rational r);

	int get_num() { return numerator; }
	int get_den() { return denominator; }
	friend Rational & operator+=(double d, Rational &r);
	friend Rational & operator-=(double d, Rational &r);
	friend Rational & operator*=(double d, Rational &r);
	friend Rational & operator/=(double d, Rational &r);
	friend ostream & operator<<(ostream & out, const Rational& r);
	friend istream& operator >> (istream& in, Rational& r);
private:
	int denominator;
	int numerator;
};
Rational double_to_rational(double d);
int GreatestCommonDivisor(int a, int b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	int min = a > b ? b : a;
	int gcd = 1;
	for (int i = 1; i <= min; i++)
	{
		if (a%i == 0 && b%i == 0)
			gcd = i;
		else
			continue;
	}
	return gcd;
}
Rational Rational::operator+(Rational& r)const
{
	int den;
	int num;
	int gcd = GreatestCommonDivisor(denominator, r.denominator);
	den = (denominator*r.denominator) / gcd;
	num = numerator*(r.denominator / gcd) + r.numerator*(denominator / gcd);
	return Rational(num, den);
}
Rational Rational::operator+(double  d) const
{
	Rational ra = double_to_rational(d);
	int den;
	int num;
	int gcd = GreatestCommonDivisor(denominator, ra.denominator);
	den = (denominator*ra.denominator) / gcd;
	num = numerator*(ra.denominator / gcd) + ra.numerator*(denominator / gcd);
	return Rational(num, den);
}
Rational operator+(double d, Rational& r)
{
	Rational ra = double_to_rational(d);
	int den;
	int num;
	int gcd = GreatestCommonDivisor(r.get_den(), ra.get_den());
	den = (r.get_den()* ra.get_den()) / gcd;
	num = r.get_num()*(ra.get_den() / gcd) + ra.get_num()*(r.get_den() / gcd);
	return Rational(num, den);

}
Rational Rational::operator-(Rational& r)const
{
	int den;
	int num;
	int gcd = GreatestCommonDivisor(denominator, r.denominator);
	den = (denominator*r.denominator) / gcd;
	num = numerator*(r.denominator / gcd) - r.numerator*(denominator / gcd);
	return Rational(num, den);
}
Rational Rational::operator-(double d) const
{
	Rational ra = double_to_rational(d);
	int den;
	int num;
	int gcd = GreatestCommonDivisor(denominator, ra.denominator);
	den = (denominator*ra.denominator) / gcd;
	num = numerator*(ra.denominator / gcd) - ra.numerator*(denominator / gcd);
	return Rational(num, den);
}
Rational operator-(double d, Rational& r)
{
	Rational ra = double_to_rational(d);
	int den;
	int num;
	int gcd = GreatestCommonDivisor(r.get_den(), ra.get_den());
	den = (r.get_den()* ra.get_den()) / gcd;
	num = -(r.get_num()*(ra.get_den() / gcd) - ra.get_num()*(r.get_den() / gcd));
	return Rational(num, den);
}
Rational Rational::operator*(Rational &r)const
{
	int num = (numerator*r.numerator);
	int den = (denominator*r.denominator);
	int gcd = GreatestCommonDivisor(num, den);
	num /= gcd;
	den /= gcd;
	return Rational(num, den);
}
Rational Rational::operator*(double d)const
{
	Rational ra = double_to_rational(d);
	int num = (numerator * ra.numerator);
	int den = (denominator * ra.denominator);
	int gcd = GreatestCommonDivisor(num, den);
	num /= gcd;
	den /= gcd;
	return Rational(num, den);
}
Rational operator*(double d, Rational r)
{
	Rational ra = double_to_rational(d);
	int num = r.get_num() * ra.get_num();
	int den = r.get_den() * ra.get_den();
	int gcd = GreatestCommonDivisor(num, den);
	num /= gcd;
	den /= gcd;
	return Rational(num, den);
}
Rational Rational::operator/(Rational &r)const
{
	int num = numerator * r.denominator;
	int den = denominator * r.numerator;
	int gcd = GreatestCommonDivisor(num, den);
	num /= gcd;
	den /= gcd;
	return Rational(num, den);
}
Rational Rational::operator/(double d)const
{
	Rational ra = double_to_rational(d);
	int num = numerator * ra.denominator;
	int den = denominator * ra.numerator;
	int gcd = GreatestCommonDivisor(num, den);
	num /= gcd;
	den /= gcd;
	return Rational(num, den);
}
Rational operator/(double d, Rational& r)
{
	Rational ra = double_to_rational(d);
	int num = ra.get_num()* r.get_den();
	int den = ra.get_den()*r.get_num();
	int gcd = GreatestCommonDivisor(den, num);
	den /= gcd;
	num /= gcd;
	return Rational(den, num);
}
Rational & Rational::operator+=(Rational & r)
{
	int gcd = GreatestCommonDivisor(denominator, r.denominator);
	numerator = numerator*(r.denominator / gcd) + r.numerator*(denominator / gcd);
	denominator = (denominator*r.denominator) / gcd;
	return *this;
}
Rational & Rational::operator+=(double d)
{
	Rational ra = double_to_rational(d);
	int gcd = GreatestCommonDivisor(denominator, ra.denominator);
	numerator = numerator*(ra.denominator / gcd) + ra.numerator*(denominator / gcd);
	denominator = (denominator*ra.denominator) / gcd;
	return *this;
}
Rational & operator+=(double d, Rational &r)
{
	Rational ra = double_to_rational(d);
	int gcd = GreatestCommonDivisor(r.denominator, ra.denominator);
	r.numerator = r.numerator*(ra.denominator / gcd) + ra.numerator*(r.denominator / gcd);
	r.denominator = (r.denominator*ra.denominator) / gcd;
	return r;
}
Rational & Rational::operator-=(Rational & r)
{
	int gcd = GreatestCommonDivisor(denominator, r.denominator);
	numerator = numerator*(r.denominator / gcd) - r.numerator*(denominator / gcd);
	denominator = (denominator*r.denominator) / gcd;
	return *this;
}
Rational & Rational::operator-=(double d)
{
	Rational ra = double_to_rational(d);
	int gcd = GreatestCommonDivisor(denominator, ra.denominator);
	numerator = numerator*(ra.denominator / gcd) - ra.numerator*(denominator / gcd);
	denominator = (denominator*ra.denominator) / gcd;
	return *this;
}
Rational & operator-=(double d, Rational &r)
{
	Rational ra = double_to_rational(d);
	int gcd = GreatestCommonDivisor(r.denominator, ra.denominator);
	r.numerator = -(r.numerator*(ra.denominator / gcd) - ra.numerator*(r.denominator / gcd));
	r.denominator = (r.denominator*ra.denominator) / gcd;
	return r;
}
Rational & Rational::operator*=(Rational &r)
{
	numerator = (numerator*r.numerator);
	denominator = (denominator*r.denominator);
	int gcd = GreatestCommonDivisor(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
	return *this;
}
Rational &Rational::operator*=(double d)
{
	Rational ra = double_to_rational(d);
	numerator = (numerator*ra.numerator);
	denominator = (denominator*ra.denominator);
	int gcd = GreatestCommonDivisor(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
	return *this;
}
Rational & operator*=(double d, Rational &r)
{
	Rational ra = double_to_rational(d);
	r.numerator = r.numerator * ra.numerator;
	r.denominator = r.denominator * ra.denominator;
	int gcd = GreatestCommonDivisor(r.numerator, r.denominator);
	r.numerator /= gcd;
	r.denominator /= gcd;
	return r;
}
Rational & Rational::operator/=(Rational & r)
{
	numerator = r.denominator * numerator;
	denominator = r.numerator * denominator;
	int gcd = GreatestCommonDivisor(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
	return *this;
}
Rational & Rational::operator/=(double d)
{
	Rational ra = double_to_rational(d);
	numerator = (numerator*ra.denominator);
	denominator = (denominator*ra.numerator);
	int gcd = GreatestCommonDivisor(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
	return *this;

}
Rational & operator/=(double d, Rational &r)
{
	Rational ra = double_to_rational(d);
	r.numerator = r.denominator*ra.numerator;
	r.denominator = r.numerator * ra.denominator;
	int gcd = GreatestCommonDivisor(r.numerator, r.denominator);
	r.numerator /= gcd;
	r.denominator /= gcd;
	return r;
}
bool Rational::operator==(Rational r)
{
	return double(numerator / denominator) == double(r.numerator / denominator) ? true : false;
}
ostream& operator<<(ostream& out, const Rational& r)
{
	int gcd = GreatestCommonDivisor(r.denominator, r.numerator);
	out << ((r.numerator) / gcd) << "/" << ((r.denominator) / gcd);
	return out;
}
istream& operator >> (istream& in, Rational& r)
{
	string in_str;
	in >> in_str;
	int slash_pos = in_str.find('/');
	r.numerator = stoi(in_str.substr(0, slash_pos));
	in_str = in_str.substr(slash_pos + 1);
	r.denominator = stoi(in_str);
	int gcd = GreatestCommonDivisor(r.denominator, r.numerator);
	r.denominator /= gcd;
	r.numerator /= gcd;
	return in;
}
Rational double_to_rational(double d)
{
	double temp = d;
	int den = 1;
	int num = int(temp);
	temp = temp - num;
	for (int i = 0; i < 6; i++)
	{
		den *= 10;
		temp *= 10;
		num = temp;
		temp = temp - num;
	}
	d *= den;
	return Rational(int(d), den);
}
int main()
{
	
	double d = 10.100036;
	Rational r1(20, 160), r2(15, 70);
	Rational r3(30, -159);
	Rational r4(6);
	cout << (10.36 += r1) << endl;
	cout << r4 << endl;
	cin >> r4;
	cout << r4 << endl;
	cout << double_to_rational(d) << endl;
	cout << GreatestCommonDivisor(r1.get_den(), r1.get_num()) << endl;
	cout << r1 << endl;
	cout << GreatestCommonDivisor(r2.get_den(), r2.get_num()) << endl;
	cout << r2 << endl;
	cout << GreatestCommonDivisor(r3.get_den(), r3.get_num()) << endl;
	cout << r3 << endl;
	cout << r1 + d << endl;
	cout << r1 - d << endl;
	cout << d + r2 << endl;
	cout << d - r2 << endl;
	cout << r1 + r2 << endl;
	cout << r1 - r2 << endl;

	cout << r1*r2 << endl;
	cout << r1*d << endl;
	cout << d*r2 << endl;
	cout << r1 / r2;
	cout << r1 / d << endl;
	cout << d / r2 << endl;
	r1 += 10.0;
	cout << r1 << endl;
	r1 *= 11;
	cout << r1 << endl;
	r1 /= 13;
	cout << r1 << endl;
	return 0;
}