#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

#endif // TIME_H_INCLUDED


class Time
{
  public:
      Time(int=0,int=0,int=0);
      ~Time();
      void setSecond(int);
      void setHour(int);
      void setMinute(int);
      void tick();
      void printStandard();
    void printUniversal();

  private:
    int hour;
    int minute;
    int second;
};
