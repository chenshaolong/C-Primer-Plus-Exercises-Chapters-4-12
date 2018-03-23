// Chapter 11 Working with Classes, Programming Exercises #7, Page 639
// complex.h -- definition for the Complex class
#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex
{
private:
    double re;         // real part
    double im;    // imaginary part
public:
    Complex();  // default constructor
    ~Complex(); // destructor, optional
    Complex(double real, double imaginary); // constructor for a complex number
   
    Complex operator+(const Complex & c) const; // Addition
    Complex operator-(const Complex & c) const; // Subtraction
    Complex operator*(const Complex & c) const; // Multiplication
    Complex operator*(double x) const; // Multiplication (x a real number)
    Complex operator~() const; // Conjugation
    friend Complex operator*(double x, const Complex & c);
    friend std::ostream & operator<<(std::ostream & os, const Complex & c); //overload <<
    friend std::istream & operator>>(std::istream & is, Complex & c); //overload >>
};

#endif