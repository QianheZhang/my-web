#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a(3, 4), b(1, 1), c;
    a.printComplex();
    cout << "+";
    b.printComplex();
    cout << "=";
    c=a.add( b );
    c.printComplex();

    cout << '\n';
    a.setComplexNumber(1, 1);
    b.setComplexNumber(4, 6);
    a.printComplex();
    cout << "-";
    b.printComplex();
    cout << "=";
    c=a.subtract( b );
    c.printComplex();
    cout << endl;
}
