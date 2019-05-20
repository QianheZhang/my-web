#include <iostream>
#include "Time.h"
using namespace std;

Time::Time( int hr, int min, int sec )
{
    setTime( hr, min, sec );
}

bool Time::setTime( int h, int m, int s )
{
    bool setHour( h );
    bool setMinute( m );
    bool setSecond( s );
    return setHour && setMinute && setSecond;
}

bool Time::setHour( int h )
{
    if ( h >= 0 && h < 24 )
    {
        hour = h;
        return true;
    }
    else
    {
        hour = 0;
        return false;
    }
}

bool Time::setMinute( int min )
{
    if ( min >= 0 && min < 60 )
    {
        minute = min;
        return true;
    }
    else
    {
        minute = 0;
        return false;
    }
}

bool Time::setSecond( int s )
{
    if ( s >= 0 && s < 60 )
    {
        second = s;
        return true;
    }
    else
    {
        second = 0;
        return false;
    }
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::printUniversal()
{
    cout << ( hour < 10 ? "0" : "" ) << hour << ':'
         << ( minute < 10 ? "0" : "" ) << minute << ':'
         << ( second < 10 ? "0" : "" ) << second;
}
void Time::printStandard()
{
    cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
         << ( minute < 10 ? "0": "" ) << minute << ':'
         << ( second < 10 ? "0": "" ) << second
         << ( hour < 12 ? " am" : " pm" );
}
