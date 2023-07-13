#include "complex0.h"

complex::complex(double r, double ima)
{
	real = r;
	imaginary = ima;
}

complex::complex()
{
	//std::cout << "从此开始" << std::endl;
	real = imaginary = 0.0;
}

complex::~complex()
{
	//std::cout << "至此结束" << std::endl;
}

complex complex::operator+(const complex & c) const
{
	complex co;
	co.real = real + c.real;
        co.imaginary = imaginary + c.imaginary;
	return co;	
}

complex complex::operator-(const complex & c) const
{
	complex co;
	co.real = real - c.real;
	co.imaginary = imaginary - c.imaginary;
	return co;
}

complex complex::operator*(const complex & c) const
{
	complex co;
	co.real = real * c.real - imaginary * c.imaginary;
	co.imaginary = real * c.imaginary + c.real * imaginary;
	return co;
}

complex operator*(double n, const complex & c)
{
	complex co;
	co.real = n * c.real;
	co.imaginary = n * c.imaginary;
	return co;
}

complex operator~(const complex & c)
{
	complex co;
	co.real = c.real;
	co.imaginary = -c.imaginary;
	return co;
}

std::ostream & operator<<(std::ostream & os, const complex & c)
{
	std::cout << "(" << c.real << ", " << c.imaginary << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, complex & c)
{
	std::cout << "real: ";
	is >> c.real;
	std::cout << "imaginary: ";
	is >> c.imaginary;
	return is;
}
