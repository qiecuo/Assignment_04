//
//  Time.cpp
//  Ex09_22
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "Time.hpp"

#include<iomanip>
#include <stdexcept>
#include<iostream>

using namespace std;

//构造Time函数
Time::Time(int hour,int minute,int second)s
{
    setTime(hour,minute,second);
}
Time &Time::setHour(int h)
    //设定小时
    {
        if(h>=0&&h<24)
        {
            hour=h;
        }
        //抛出异常
        else
            throw invalid_argument("minute must be 0-23");

    }

int Time::getHour()const
{
    // 1 hour / 3600
    totalSeconds3 = totalSeconds/3600;
    return (totalSeconds/3600);
}
Time &Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setsecond(s);
}
Time &Time::setMinute(int m)
{
    //设定分钟
    if(m>=0&&m<60)
     {
         minute=m;
     }
    //抛出异常
     else
         throw invalid_argument("minute must be 0-59");
}
int Time::getMinute()const
{
    int totalSeconds2 = totalSeconds/60;
    // 1 min / 60
    return (totalSeconds2);
}
Time &Time::setsecond(int s)
{
    //设定秒
    if(s>=0&&s<60)
     {
         second=s;
     }
     //抛出异常
     else
         throw invalid_argument("minute must be 0-59");
}
Time::getSecond()const
{
    return totalSeconds;
}
void Time::printUniversal()const
{
    //补全数字setfill
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
    <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard()const//function printStandard
{
    cout<<setw(2)<<setfill('0')<<((hour%12==0&&hour>=12)?12:hour%12)<<":"<<setw(2)<<setfill('0')<<minute
    <<":"<<setw(2)<<setfill('0')<<second<<' '<<((hour>=12)?"PM":"AM")<<endl;
    //补全数字
}
