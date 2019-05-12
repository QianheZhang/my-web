#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex( double real, double imaginary )
{
    setComplexNumber(real, imaginary);
}

Complex Complex::add(const Complex &c)
{
    return Complex(realPart+c.realPart, imaginaryPart+c.imaginaryPart);
}

Complex Complex::subtract( const Complex &c )
{
    return Complex(realPart-c.realPart, imaginaryPart-c.imaginaryPart);
}

void Complex::printComplex()
{
    cout << '(' << realPart << ", " << imaginaryPart << ')';
}

void Complex::setComplexNumber(double rp, double ip)
{
    realPart=rp;
    imaginaryPart=ip;
}

