#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle a, b( 8.6, 4.5 ), c( 21.0, 21.0 );
    cout << fixed;
    cout << setprecision( 1 );
    cout << "a: length = " << a.getLength() << "; width = "
         << a.getWidth() << "; perimeter = " << a.perimeter()
         << "; area = " << a.area() << '\n';
    cout << "b: length = " << b.getLength() << "; width = "
         << b.getWidth() << "; perimeter = " << b.perimeter()
         << "; area = " << b.area() << '\n';
    cout << "c: length = " << c.getLength() << "; width = "
         << c.getWidth() << "; perimeter = " << c.perimeter()
         << "; area = " << c.area() << endl;
}
