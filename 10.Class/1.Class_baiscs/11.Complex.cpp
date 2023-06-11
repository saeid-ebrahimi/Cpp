#include "stdafx.h"
#include <iostream>

class Complex
{
public:
	Complex() :_real(0), _imag(0){}
	Complex(double real, double imag = 0) :_real(real), _imag(imag) {}
	Complex add(const Complex& c)const;
	void inc(const Complex& c);
	Complex mult(const Complex& c)const;
	void multequal(const Complex& c);
	void print()const;
	~Complex(){}
	double re() const { return _real; }
	double im() const { return _imag; }
private:
	double _real;
	double _imag;
};

Complex Complex::add(const Complex& c) const
{
	return Complex(_real + c.re(),_imag + c.im());
}
void Complex::inc(const Complex& c)
{
	_real += c.re();
	_imag += c.im();
}
Complex Complex::mult(const Complex& c)const
{
	double real = _real*c.re() - _imag*c.im();
	double imag = _real*c.im() + _imag*c.re();
	return Complex(real, imag);
}
void Complex::multequal(const Complex& c)
{
	_real =_real*c.re() - _imag*c.im();
	_real =_real*c.im() + _imag*c.re();
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
	Complex c(2, 4);

	a.add(c).print();
	a.inc(c);
	a.print();
	a.mult(c).print();
	a.multequal(c);
	a.print();
	//zero.inc(c); //compile error
}