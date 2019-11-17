#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdexcept>
#include "Time.h"
using namespace std;
//constructor function
Time::Time( int h,int m,int s )
{
    setTime( h,m,s );
}//end function
//constructor function
Time::Time()
{
    time_t timer;
    struct tm* timers;
    time (&timer);
    timers = localtime(&timer);
    asctime(timers);
    setTime(timers->tm_hour,timers->tm_min ,timers->tm_sec);
}//end function
//function to set time
void Time::setTime( int h,int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}
//function to set hour
void Time::setHour( int h )
{
    if( h>=0&&h<24 )
        totalSeconds=h*3600+getMinute()*60+getSecond();
    else
        throw invalid_argument( "hour must be 0-23" );
}//end function
//function to set minute
void Time::setMinute( int m )
{
    if( m>=0&&m<60 )
        totalSeconds=getHour()*3600+m*60+getMinute();
    else
        throw invalid_argument( "minute must be 0-59" );
}//end function
//function to set second
void Time::setSecond( int s )
{
    if( s>=0&&s<60 )
        totalSeconds=getHour()*3600+getMinute()*60+s;
    else
        throw invalid_argument( "second must be 0-59" );
}//end function
//function to get hour
int Time::getHour()const
{
    int a = totalSeconds/3600;
    int b = a%24;
    return b;
}//end function
//function to get minute
int Time::getMinute()const
{
    int a = totalSeconds%3600;
    int b = a/60;
    return b;
}//end function
//function to get second
int Time::getSecond()const
{
    int a = totalSeconds%60;
    return a;
}//end function
//function to print standard time
void Time::printStandard()const
{
    cout<<(( getHour() == 0||getHour() == 12)?12 : getHour()%12)
       <<":"<<setfill( '0' ) <<setw( 2 )<<getMinute()
       <<":"<<setw( 2 )<<getSecond()<<( getHour()<12?"AM":"PM");
}//end function
//function to print universal time
void Time::printUniversal()const
{
    cout<< setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}//end function
//next second
void Time::tick()
{
    ++totalSeconds;
}//end function
