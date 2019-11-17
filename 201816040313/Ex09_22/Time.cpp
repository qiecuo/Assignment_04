#include <iostream>
#include "Time.h"
#include <ctime>
#include <iomanip>
#include <stdexcept>
using namespace std;

Time::Time()//use time and localtime initialize Time
{

    time_t t;
    struct tm *tblock;
    t = time(NULL);
    tblock = localtime(&t);
    allsecond=(tblock->tm_hour)*3600+(tblock->tm_min)*60+(tblock->tm_sec);//calculate total seconds
}

void Time::printStandard()const//output standard time
{
    cout<<( (getAllSecond()==0 || (getAllSecond()/3600)==12)? 12: (getAllSecond()/3600)%12)<<":"<<setfill('0')<<setw(2)<<(getAllSecond()%3600/60)<<":"<<setw(2)<<getAllSecond()%3600%60<<
    ((getAllSecond()/3600)<12 ? "AM" : "PM");
    cout<<endl;
}
unsigned int Time::getAllSecond()const
{
    return allsecond;
}
Time Time::tick()//second add 1
{
    ++allsecond;
    if(allsecond%3600%60==0)
    {
       (allsecond%3600%60)==0;
       (allsecond%3600/60)==(allsecond%3600/60)+1;
    }
    if(allsecond%3600/60>59)
    {
        allsecond%3600%60==0;
        allsecond%3600/60==0;
        allsecond/3600==allsecond/3600+1;
    }
    if(allsecond/3600==23&&allsecond%3600/60==59&&allsecond%3600%60>59)
    {
        allsecond%3600%60==0;
        allsecond%3600/60==0;
        allsecond/3600==0;
    }
    return *this;
}
