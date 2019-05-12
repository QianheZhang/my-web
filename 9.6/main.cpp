#include <iostream>
#include "Rational.h"
using namespace std;
int main()
{
    Rational r;
    Rational r1(3,4),r2(5,8);
    r=r1+r2;
    r.display();
    r=r1-r2;
    r.display();
    r=r1*r2;
    r.display();
    r=r1/r2;
    r.display();
    return 0;
}
