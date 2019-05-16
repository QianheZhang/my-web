#include <iostream>
#include "DateAndTime.h"
using namespace std;

int main()
{
    DateAndTime d( 12, 30, 2018, 23, 59, 58 );

    for ( int ticks = 1; ticks <= 4; ticks++ )
    {
        cout << "Universal time: ";
        d.printUniversal();
        cout << "Standard  time: ";
        d.printStandard();
        d.tick();
    }
}
