#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Point a( 2.0, 3.0 );
    Point b( 3.0, 1.0 );
    Point c( 1.0, 2.0 );
    Point d( 1.0, 1.0 );
    Point e( 2.0, 4.0 );
    Point f( 3.0, 0.0 );
    Point g( 2.0, 3.0 );
    Point h( 1.0, 2.0 );
    Point i( 99.0, -2.0 );

    Rectangle rectangles[ 4 ];

    for ( int i = 0; i < 4; i++ )
    {
        cout << "Rectangle" << i + 1 << ":\n";

        switch ( i )
        {
        case 0:
            rectangles[ i ] = Rectangle( d, c, b, a );
            break;
        case 1:
            rectangles[ i ] = Rectangle( h, g, f, e );
            break;
        case 2:
            rectangles[ i ] = Rectangle( a, b, g, h );
            break;
        case 3:
            rectangles[ i ] = Rectangle( i, b, c, d );
            break;
        }

        cout << "length = " << rectangles[ i ].length();
        cout << "\nwidth = " << rectangles[ i ].width();
        rectangles[ i ].perimeter();
        rectangles[ i ].area();
        cout << "The rectangle "
             << ( rectangles[ i ].square() ? "is" : "is not" )
             << " a square.\n";
    }
}
