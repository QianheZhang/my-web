#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d( 12, 30, 2018 );
    for ( int loop = 1; loop <=4; ++loop )
    {
        d.print();
        d.nextDay();
    }
}
