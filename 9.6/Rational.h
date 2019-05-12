#ifndef RATIONAL_H
#define RATIONAL_H

using namespace std;
class Rational
{
public:
    Rational(int n=0,int d=1):num(n),den(d)
    {
    }
    friend Rational operator+(const Rational &r1, const Rational &r2);
    friend Rational operator-(const Rational &r1, const Rational &r2);
    friend Rational operator/(const Rational &r1, const Rational &r2);
    friend Rational operator*(const Rational &r1, const Rational &r2);
    void simplify();
    void display();
private :
    double num;
    double den;
};
#endif
