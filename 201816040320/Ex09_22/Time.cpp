#include <ctime>
#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(time_t a)
{
    seconds=a;
}
//构造函数
void Time::setTime(int a)
{
    seconds=a;
}
//设置时间
int Time::gethour()
{
    return seconds/3600;
}
//获取时
int Time::getmin()
{
    return seconds%3600/60;
}
//获取分
int Time::getsecond()
{
    return seconds%3600%60;
}
//获取秒
void Time::nextsecond()
{
    seconds=seconds+1;
}
//下一秒
void Time::printTime()
{
    cout << gethour() <<':'<<getmin()<<':'<<getsecond()<<endl;
}
//打印时间
