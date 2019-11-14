#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Time.h"  //include definition of class Time from Time.h

using namespace std;

//Time constructor
Time::Time(  int h, int m, int s )
{
    // initializes time
    setTime( h, m, s );
} // end Time constructor

//Time constructor get the time
Time::Time( )
{
    time_t timer;
    struct tm* timers;
    time (&timer);
    timers = localtime(&timer);
    asctime(timers);
    setTime(timers->tm_hour,timers->tm_min ,timers->tm_sec);
}

Time &Time::setTime( int h, int m, int s )
{
    //convert time to total seconds
    if( (h >=0 && h <24) && (m >=0 && m <60) && (s >=0 && s <60) )
    {
        totalSeconds = h*3600 + m*60 + s;
    }
    else
        throw invalid_argument("hour, minute and/or second was out of range");
    return *this;
}

Time &Time::setHour(int h)
{
    //If hour is in range,convert time to total seconds
    if( h >= 0 && h < 24)
        totalSeconds = ( h*3600 + getMinute()*60 + getSecond());
    else
        throw invalid_argument("hour must be 0-23");
    return *this;
}

Time &Time::setMinute(int m)
{
    //If minute is in range,convert time to total seconds
    if( m >= 0 && m < 60)
        totalSeconds = ( getHour()*3600 + m*60 + getSecond());
    else
        throw invalid_argument("minute must be 0-59");
    return *this;
}

Time &Time::setSecond(int s)
{
    //If second is in range,convert time to total seconds
    if( s >= 0 && s < 60)
        totalSeconds = ( getHour()*3600 + getMinute()*60 + s );
    else
        throw invalid_argument("second must be 0-59");
    return *this;
}

unsigned int Time::getHour() const
{
    return totalSeconds/3600%24; // function to retrieve the hour
}

unsigned int Time::getMinute() const
{
    return totalSeconds%3600/60;  // function to retrieve the minute
}

unsigned int Time::getSecond() const
{
    return totalSeconds%3600%60;  // function to retrieve the second
}

void Time::printUniversal() const
{
    //print universal time
    cout<< setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}

void Time::printStandard() const
{
    //print standard time
    cout<<(( getHour()==0 || getHour()==12 ) ? 12 : getHour()%12) <<":"
        <<setfill('0') <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<( getHour()<12 ?" AM":" PM");
}

void Time::tick()
{
    // total seconds plus one
    totalSeconds++;
}
