#include<iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time//define class Time
{
public:
    Time(int=0,int=0,int=0);//default constructor
    Time &setTime(int,int,int);//set hour,minute,second
    Time &setHour(int);//set hour
    Time &setMinute(int);//set minute
    Time &setsecond(int);//set second
    int getHour()const;//return hour
    int getMinute()const;//return minute
    int getSecond()const;//return second
    void printUniversal()const;//print universal time
    void printStandard()const;//print standard time
private://data member
    int totalSeconds;
    int hour;
    int minute;
    int second;
};
#endif
