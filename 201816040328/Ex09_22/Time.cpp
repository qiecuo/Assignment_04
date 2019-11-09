#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
#include<ctime>
using namespace std;

//Time constructor initializes each data member
Time::Time(int a,int b,int c)
{
    settime(a,b,c);//validate and set time
    //settimebytime();
}
//set new time
void Time::settime(int x,int y,int z)
{
    sethour(x);//set private filed hour
    setminute(y);//set private filed minute
    setsecond(z);//set private filed second
}//end set time
//set hour value
void Time::sethour(int d)
{
    if(d>=0&&d<24)
        hour=d;
    else
        hour=0;
}//end
//set minute value
void Time::setminute(int e)
{
    if(e<60&&e>=0)
        minute=e;
    else
        minute=0;
}//end
//set second value
void Time::setsecond(int f)
{
    if(f>=0&&f<60)
        second=f;
    else
        second=0;
}//end
//set time by time and localtime
void Time::settimebytime()
{
   time_t rawtime;
   struct tm * timeinfo;
   time (&rawtime);//rawtime获取的是从1970年到现在以来的总秒数
   timeinfo = localtime (&rawtime);//localtime 函数把rawtime转化为当地时间
   hour=timeinfo->tm_hour;
   minute=timeinfo->tm_min;
   second=timeinfo->tm_sec;
}
//get hour
int Time::gethour() const
{
    return hour;
}//end

//get minute
int Time::getminute() const
{
    return minute;
}//end
//get second
int Time::getsecond() const
{
    return second;
}
void Time::tick()
{
    second++;
    if(second>=60)
    {
        second-=60;
        minute++;
    }
    if(minute>=60)
    {
        minute-=60;
        hour++;
    }
    if(hour>=23)
    {
        hour-=24;
    }
}
//print time in universal format (HH:MM:SS)
void Time::printUniversal()const
{
    //cout<<gethour();
    cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<endl;
}//end
//print time in standard format ()HH:MM:SS or AM or PM
void Time::printStandard()const
{
    cout<<((gethour()==0||gethour()==12)?12:gethour()%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()
<<(hour<12?"AM":"PM");
} //END
void Time::printbysecond()const
{
    cout<<"total seconds is:";
    cout<<3600*gethour()+60*getminute()+getsecond()<<endl;
}

