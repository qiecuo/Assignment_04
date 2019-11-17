#include <ctime>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int a, int b, int c) //初始化
{
    hour = a;
    minute = b;
    second = c;
}

void Time::setTime(int a, int b, int c) //设定时间
{
    hour = a;
    minute = b;
    second = c;
}

void Time::printTime()
{

    cout << setfill('0') << setw(2) << hour%12 << ":" << setw(2) << minute << ":" << setw(2) << second << " ";
    if(hour >=0 && hour <= 12)
        cout << "AM";
    else
        cout << "PM";

    cout << endl << "Seconds since midnight are " << hour*3600 + minute*60 + second;
    cout << endl;
}

void Time::tick()   //秒数加1
{
    second++;
    if(second >= 60)
    {
        second = 0;
        minute++;
    }
    if(minute >= 60)
    {
        minute = 0;
        hour++;
    }
    if(hour >= 24)
    {
        hour = 0;
    }
}
