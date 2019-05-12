#include <iostream>
#include "Rational.h"
#include "cmath"
using namespace std;

Rational operator+(const Rational &r1,const Rational &r2)
{
    Rational r;
    r.num = r1.den*r2.num+r1.num*r2.den;
    r.den = r1.den*r2.den;
    r.simplify();
    return r;
}
Rational operator-(const Rational &r1,const Rational &r2)
{
    Rational r;
    r.num = r1.num*r2.den-r1.den*r2.num;
    r.den = r1.den*r2.den;
    r.simplify();
    return r;
}
Rational operator/(const Rational &r1,const Rational &r2)
{
    Rational r;
    if(r1.den==0||r2.den==0||r2.num==0)
    {
        cout<<"not 0"<<endl;
    }
    else if(r1.num==0)
    {
        cout<<"0/0"<<endl;
    }
    else {
        r.num = r1.num*r2.den;
        r.den = r1.den*r2.num;
        r.simplify();
        return r;
    }
}
Rational operator*(const Rational &r1,const Rational &r2)
{
    Rational r;
    if(r1.den==0||r2.den==0)
    {
        cout<<"denominator not 0"<<endl;
    }
    else if(r1.num==0||r2.num==0)
    {
        cout<<"0/0"<<endl;
    }
    else
    {
        r.num = r1.num*r2.den;
        r.den = r1.den*r2.num;
        r.simplify();
        return r;
    }
}
void Rational::simplify()
{
    int i,j,temp;
    i=abs(den);
    j=abs(num);
    while(temp=i%j)
    {
        i=j;
        j=temp;
    }
    den/=j;
    num/=j;
    if(den<0)
    {
        den=-den;
        num=-num;
    }
}
void Rational::display()
{
    if(num==0||den==0)
    {

    }
    else
    {
        cout<<num<<"/"<<den<<endl;
    }
}
