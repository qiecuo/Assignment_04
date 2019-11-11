#include <iostream>
#include "Time.h"
#include <stdexcept>
#include<iomanip>
#include<ctime>
using namespace std;
Time::Time(int second)//default constructor
{
    setTime(second);
}
Time::Time()//constructor with a parameter
{
time_t secondTime;
  struct tm * infoTime ;
  time (&secondTime);
  infoTime = localtime (&secondTime);
  setTime(infoTime->tm_sec+infoTime->tm_hour*3600+infoTime->tm_min*60);
}

void Time::setTime(int second)//the function to set the time
{
        this->second=second;
        increament();
}
unsigned int Time::getHour()const//the function to get the hour
{
    return second/3600;
}
unsigned int Time::getMinute()const//the function to get the minute
{
    return second%3600/60;
}
unsigned int Time::getSecond()const//the function to get the second
{
    return second%60;
}
void Time::printUniversal()const//print the time with universal form
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
}
void Time::printStandard()const//print the time with standard form
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(getHour()<12?" AM":" PM")<<endl;
}
void Time::tick()//to increase second
{
    setTime(second+1);
    increament();
}
