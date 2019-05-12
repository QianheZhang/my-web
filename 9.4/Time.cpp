#include <iostream>
#include <iomanip>
#include "Time.h"
#include <ctime>

using namespace std;

Time::Time(int hour, int miinute, int second)
{
    time_t now;
    struct tm *tm_now;
    now=time(0);
    tm_now = localtime(&now);
    setTime(tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
}
void Time::setTime( int h, int m, int s )
{
    hour=(h>=0&&h<24) ? h:0;
    minute=(m>=0&&m<60) ? m:0;
    second=(s>=0&&s<60) ? s:0;
}

void Time::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}
void Time::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
        << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
        << second << ( hour < 12 ? " AM" : " PM" );
}

