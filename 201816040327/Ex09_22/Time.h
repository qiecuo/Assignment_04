//
//  Time.hpp
//  Ex09_22
//
//  Created by misonomayubw on 2019/11/17.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include<iostream>
using namespace std;

class Time
{
public:
    Time(int,int,int);
    //设定时间
    
    //输出时间
    void printUniversal()const;
    void printStandard()const;
    
    Time &setTime(int,int,int);
    //设定小时
    Time &setHour(int);
    int getHour()const;
    //设定分钟
    Time &setMinute(int);
    int getMinute()const;
    //设定秒
    Time &setsecond(int);
    int getSecond()const;
    
private:
    //totalseconds 计算总秒数
    int totalSeconds3;
    int totalSeconds2;
    int totalSeconds;
    int hour;
    int minute;
    int second;
};


#endif /* Time_hpp */
