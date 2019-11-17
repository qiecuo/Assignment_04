//Assignment_04: Time.cpp
//Realize the class function

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if(h>=0 && h<24)
        second+=h*3600;
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
    if(m>=0 && m<60)
        second+=m*60;
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
    if(s>=0 && s<60)
        second+=s;
    else
        throw invalid_argument("second must be 0-60");
}

// hours to midnight
int Time::getHour() const
{
    return second/3600%24;
}

int Time::getMinute() const
{
    struct tm *Minute;
    Minute = localtime(&second);
    return Minute->tm_min;
}

int Time::getSecond() const
{
    struct tm *Second;
    Second = localtime(&second);
    return Second->tm_sec;
}

void Time::tick()
{
    second ++;
}

void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2) << getHour() << ":" << setw(2) <<getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard() const
{
    cout<< ((getHour()==0 || getHour()==12) ? 12 :getHour()%12) << ":" << setfill('0')<<setw(2) << getMinute() <<":" <<setw(2) <<getSecond() << (getHour() <12 ? " AM" : " PM");
}
