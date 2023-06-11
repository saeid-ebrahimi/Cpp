#include "stdafx.h"
#include <iostream>
#include <cstdlib>
class Complex
{
public:
	Complex() :_real(0), _imag(0){}
	Complex(double real, double imag = 0) :_real(real), _imag(imag) {}
	inline void conjugate() { _imag *= -1; };
	Complex operator+(const Complex& c)const;
	Complex operator+(const double r)const;
	Complex& operator+=(const Complex& c);
	Complex& operator+=(const double r);
	Complex operator-(const Complex& c)const;
	Complex operator-(const double r)const;
	Complex& operator-=(const Complex& c);
	Complex& operator-=(const double r);
	Complex operator*(const Complex& c)const;
	Complex operator*(const double r)const;
	Complex& operator*=(const Complex& c);
	Complex& operator*=(const double r);
	Complex operator/(const Complex& c)const;
	Complex operator/(const double r)const;
	Complex& operator/=(const Complex& c);
	Complex& operator/=(const double d);
	bool operator==(const Complex& c)const;
	bool operator==(const double r)const;
	Complex operator-()const;
	void print()const;
	~Complex(){}
	double re() const { return _real; }
	double im() const { return _imag; }
private:
	double _real;
	double _imag;
};

Complex Complex::operator+(const Complex& c) const
{
	return Complex(_real + c.re(),_imag + c.im());
}
Complex Complex::operator+(const double r) const
{
	return Complex(_real + r, _imag);
}
Complex& Complex::operator+=(const Complex& c)
{
	_real += c.re();
	_imag += c.im();
	return *this;
}
Complex& Complex::operator+=(const double r)
{
	_real += r;
	return *this;
}
Complex Complex::operator-(const Complex& c) const
{
	return Complex(_real - c.re(), _imag - c.im());
}
Complex Complex::operator-(const double r) const
{
	return Complex(_real - r, _imag);
}
Complex& Complex::operator-=(const Complex& c)
{
	_real -= c.re();
	_imag -= c.im();
	return *this;
}
Complex& Complex::operator-=(const double r)
{
	_real -= r;
	return *this;
}
Complex Complex::operator*(const Complex& c)const
{
	double real = _real*c.re() - _imag*c.im();
	double imag = _real*c.im() + _imag*c.re();
	return Complex(real, imag);
}
Complex Complex::operator*(const double r) const
{
	return Complex(_real*r, _imag*r);
}
Complex& Complex::operator*=(const Complex& c)
{
	double real = _real*c.re() - _imag*c.im();
	double imag = _real*c.im() + _imag*c.re();
	_real = real;
	_imag = imag;
	return *this;
}
Complex& Complex::operator*=(const double r)
{
	_real *= r;
	_imag *= r;
	return *this;
}
Complex Complex::operator/(const Complex& c)const
{
	if (c.im() == c.re())
	{
		std::abort();
	}
	double real = c.re();
	double imag = c.im();
	double coeff = real * real - imag * imag;
	Complex comp(real / coeff, imag / coeff);
	comp.conjugate();
	return this -> operator*(comp);
}
Complex Complex::operator/(const double r)const
{
	if (r == 0)
		std::abort();
	return Complex(_real / r, _imag / r);
}
Complex& Complex::operator/=(const Complex& c)
{
	if (c.im() == c.re())
	{
		std::abort();
	}
	double real = c.re();
	double imag = c.im();
	double coeff = real * real - imag * imag;
	Complex comp(real / coeff, imag / coeff);
	comp.conjugate();
	this -> operator*=(comp);
	return *this;
}
Complex& Complex::operator/=(const double r)
{
	if (r == 0)
		std::abort();
	_real /= r;
	_imag /= r;
	return *this;
}
bool Complex::operator==(const Complex& c) const
{
	return (_real == c.re() && _imag == c.im());
}
bool Complex::operator==(const double r) const
{
	return (_real == r && _imag == 0);
}
Complex Complex::operator-() const
{
	return Complex(-_real,-_imag);
}

void Complex::print() const
{
	std::cout << std::showpos;
	std::cout << _real << _imag << "i" << std::endl;
}
int main()
{
	Complex a(3, 6);
	Complex b(6);
	const Complex zero;
	Complex c(3, 2);
	/*
	a.operator+(c).print();
	(a + c).print();
	a.operator-(c).print();
	(a - c).print();
	
	a.operator+=(c);
	a.print();
	a.operator-=(c);
	a.print();
	a += c;
	a.print();
	a -= c;
	a.print();
	*/
	/*
	a.operator+(7).print();
	(a + 7).print();
	a.operator-(7).print();
	(a - 7).print();

	a.operator+=(6);
	a.print();
	a.operator-=(6);
	a.print();
	a += 5;
	a.print();
	a -= 5;
	a.print();
	*/
	/*
	(-a).print();
	a.conjugate();
	a.print();
	a.conjugate();
	a.print();
	*/

	a.operator*(c).print();
	(a*c).print();
	a.operator/(c).print();
	(a / c).print();
	a.operator*=(c);
	a.print();
	a.operator/=(c);
	a.print();
	a *= c;
	a.print();
	a /= c;
	a.print();

	std::cout << (a == c) << std::endl;
	//zero.inc(c); //compile error
	
}