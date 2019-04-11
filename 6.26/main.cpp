#include <iostream>
#include <iomanip>
using namespace std;

int celsius( int);
int fahrenheit( int);

int main()
{
    for ( int i=0; i<4; i++ )
    cout <<  setw( 8) << "Celsius" <<  setw( 12) << "Fahrenheit";

    for ( int j=0; j<100; j++ )
        {
            cout << setw( 8) << j<< setw( 12) << fahrenheit( j);
        }
            cout << setw( 8) << 100<< setw( 12) << fahrenheit( 100) << "\n";
    for ( int i=0; i<4; i++ )
    cout <<  setw( 12) << "Fahrenheit" <<  setw( 8) << "Celsius";

    for ( int j=32; j<=212; j++ )
        {
            cout << setw( 12) << j<< setw( 8) << celsius( j);
        }
}

int celsius( int f)
{
   return ( 5.0/9.0*( f-32) );
}

int fahrenheit( int c)
{
   return ( 9.0/5.0*c+32);
}
