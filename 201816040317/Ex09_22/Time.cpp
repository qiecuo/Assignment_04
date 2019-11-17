#include <iostream>
#include <ctime>
#include<iomanip>
#include<stdexcept>
#include"Time.h"

using namespace std;

Time::Time()
{
    const time_t currentTime=time(0);
    const tm*localTime=localtime(&currentTime);
    setTime(localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
}

void Time::setTime(time_t a,time_t b,time_t c)
{
    hour=a;
    minute=b;
    second=c;
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
     cout<<setfill('0')<<setw(2) << getHour() << ":" << setw(2) <<getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
    cout<< ((getHour()==0 || getHour()==12) ? 12 :getHour()%12) << ":" << setfill('0')<<setw(2) << getMinute() <<":" <<setw(2) <<getSecond() << (getHour() <12 ? " AM" : " PM");
}

void Time::tick()
{
    second++;
}
