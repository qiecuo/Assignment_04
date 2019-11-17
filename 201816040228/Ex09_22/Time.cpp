#include <iostream>
#include <iomanip>

#include <string>
using namespace std;

#include "Time.h" // Time class definition
// constructor initializes
Time::Time()//构造函数获取当前时间
{
    time_t now;
    time(&now);
    tm*t=localtime(&now);
    Second=t->tm_sec;
    Minute=t->tm_min;
    Hour=t->tm_hour;
    Month=t->tm_mon+1;
    Year=t->tm_year+1900;
    Day=t->tm_mday;
}

void Time::setTime()//将时间用秒表示
{
    cout <<  Second+Minute*60+Hour*3600 << endl;
}

void Time::setSecond(unsigned int second)//s
{
    if(second<=59)
    {
        Second=second;
    }
    else
    {
        throw invalid_argument("Second must be 0-59");
    }
}



void Time::setMinute(unsigned int minute)//m
{
    if(minute<=59)
    {
        Minute=minute;
    }
    else
    {
        throw invalid_argument("Minute must be 0-59");
    }
}

void Time::setHour(unsigned int hour)//h
{
   if(hour<=24)
    {
        Hour=hour;
    }
    else
    {
        throw invalid_argument("Hour must be 0-24");
    }
}
unsigned int Time::getSecond()
{
      return Second;
}

unsigned int Time::getMinute()
{
      return Minute;
}

unsigned int Time::getHour()
{
      return Hour;
}
void Time::tick()//递增到下一秒，检测
{
    if(Second<59)
        ++Second;
    else if(Minute<59)
    {
        ++Minute;
        Second=0;
    }
    else if(Hour<24)
    {
        ++Hour;
        Minute=0;
        Second=0;
    }
    else
    {
        Hour=0;
        Minute=0;
        Second=0;
        Day++;
    }

}
void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2)<< getSecond()<< endl;
}

void Time::printStandard()
{
    cout << setw(2) <<setfill('0')<< (( getHour()%12==0 && getHour()>=12 ) ? 12: getHour() % 12 ) << ":" <<  setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (( Hour >= 12)? "PM" : "AM" ) << endl;
}
