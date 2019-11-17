#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<ctime>
#include"Time.h"
using namespace std;
Time::Time(int Hour,int Minute,int Second)
{
hour=Hour;
minute=Minute;
second=Second;
}
void Time::setHour(const int Hour)
{
if(Hour>=24||Hour<0)//判断输入的小时是否在规定的时间范围内
cout<<"Data error!"<<endl;
else
hour=Hour;
 //cin>>hour;
}
void Time::setMinute(const int Minute)
{
if(Minute>=60||Minute<0)
{
    cout<<"Data error!"<<endl;
   // cin>>minute;
}
else
minute=Minute;
}
void Time::setSecond(const int Second)
{
if(Second>=60||Second<0)
cout<<"Data error!"<<endl;
//cin>>second;
second=Second;
}
int Time::getHour()const
{
return hour;
}
int Time::getMinute()const
{
return minute;
}
int Time::getSecond()const
{
return second;
}
void Time::printUniversal()const
{
cout<<hour<<":"<<minute<<":"<<second<<endl;
}
void Time::printStandard()const
{
if(hour>=0&&hour<=12)
cout<<hour<<":"<<minute<<":"<<second<<"a.m."<<endl;
else
cout<<hour-12<<":"<<minute<<":"<<second<<"p.m."<<endl;
}
