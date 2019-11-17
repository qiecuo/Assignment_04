#include <sostream>
#include <iomainip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time( int hour, int minute, int second )
{
    setTime( hour, minute, second);
}//end Time constructor
void Time::setTime( int h, int m, int s)
{
    setHour(h);//set private field hour
    setMunite(m);//set private field minute
    setSecond(s);//set private field second
}
void Time::setHour( int h )
{
    if( h>=0&& h<24)
        hour = h;
    else
       throw invalid_argument( "hour must be 0~23");
}
void Time:;setMinute( int m )
{
    if( m>=0 && m<60 )
        minute = m;
    else
        throw invalid_argument( "minute must be 0~59");
}
void Time::setSecond( int s )
{
    if( s >= 0 && s < 60 )
        second = s;
    else
        throw invalid_argument( " second must be 0~59");
}//end function Setsecond
unsigned int Time::getHour() const
{
    return hour;
}
unsigned int Time::getMinute() const
{
    return minute;
}
unsigned int Time::getSecond() const
{
    return second;
}//end function getSecond

int Time::printsecond()
{
    return 3600*hour + 60*minute + second;
}
