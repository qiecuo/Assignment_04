#include<iomanip>
#include<stdexcept>
#include<iostream>
#include"Time.h"
using namespace std;
Time::Time(int hour,int minute,int second)//constructor initializes
{
    setTime(hour,minute,second);
}
Time &Time::setHour(int h)//return seconds
{
    int hours=(h>=0&&h<24)?h:0;
    totalSeconds=(hours*3600)+(getMinute()*60)+getSecond();
    return *this;
}
int Time::getHour()const//function to get hour
{
    return (totalSeconds/3600);
}
Time &Time::setTime(int h,int m,int s)//set time
{
    setHour(h);
    setMinute(m);
    setsecond(s);
}
Time &Time::setMinute(int m)//set function
{
    int minutes=(m>=0&&m<60)?m:0;
    totalSeconds=(getMinute()*60)+getSecond();
    return *this;
}
int Time::getMinute()const//function to get minute
{
    return (totalSeconds/60);
}
Time &Time::setsecond(int s)//set function
{
    int seconds=(s>=0&&s<60)?s:0;
    totalSeconds=getSecond();
    return *this;
}
Time::getSecond()const//function get second
{
    return totalSeconds;
}
void Time::printUniversal()const//function printUniversal
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
    <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard()const//function printStandard
{
   cout<<setw(2)<<setfill('0')<<((hour%12==0&&hour>=12)?12:hour%12)<<":"<<setw(2)<<setfill('0')<<minute
    <<":"<<setw(2)<<setfill('0')<<second<<' '<<((hour>=12)?"PM":"AM")<<endl;
}
