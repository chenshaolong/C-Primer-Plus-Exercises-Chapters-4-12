// Chapter 11 Working with Classes, Programming Exercises #7, Page 639
// complex2.cpp -- Complex methods
#include <iostream>
#include "complex0.h"

// default constructor, c = 0
Complex::Complex()
{
    re = im = 0;
}

// destructor
Complex::~Complex()
{
}

// construct for a complex number
Complex::Complex(double real, double imaginary)
{
    re = real;
    im = imaginary;
}

// Addition
Complex Complex::operator+(const Complex & c) const
{
    return Complex(re + c.re, im + c.im);
}

//Subtraction
Complex Complex::operator-(const Complex & c) const
{
    return Complex(re - c.re, im - c.im);
}

//Multiplication
Complex Complex::operator*(const Complex & c) const
{
    return Complex(re *c.re - im * c.im, re * c.im + im * c.re);
}

//Multiplication (x a real number)
Complex Complex::operator*(double x) const
{
    return Complex(x * re, x * im);
}

//friend function for Multiplication (x a real number)
Complex operator*(double x, const Complex & c)
{
    return c * x;
}

// Conjugation
Complex Complex::operator~() const
{
    return Complex(re, -im);
}

//overloaded functions
//overload <<
std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.re << "," << c.im << "i)";
    return os;
}

//overload >>
std::istream & operator>>(std::istream & is, Complex & c)
{
    std::cout << "real: ";
    if (is >> c.re)
    {
        std::cout << "imaginary: ";
        is >> c.im;
    }
    return is;
}