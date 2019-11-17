#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
#include "Time.h"
using namespace std;
//struct tm *localtime(const time_t *timer);
class Time
{
public:
    Time(int h=0,int m=0,int s=0);

   void setTime(int,int,int);
   void setHour(int);
   void setMinute(int);
   void setSecond(int);

   int getHour();
   int getMinute();
   int getSecond();
    void printUniversal();
    void printStandard();
    void Tick();
private:
    int hour;
    int minute;
    int second;
};

#endif // TIME_H_INCLUDED
