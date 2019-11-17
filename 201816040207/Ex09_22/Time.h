#ifndef TIME_H
#define TIME_H
#include<time.h>
class Time
{
public:
    explicit Time(int = 0,int =0,int =0);//初始化
    void timechange();//用time库中的函数赋值
    void printTime();//打印time库中的值
    void setTime(int ,int ,int );//初始化时间
    void setHour(int );//初始化小时
    void setMinute(int );//初始化分钟
    void setSecond(int );//初始化秒
    void timetick();//将时间加一秒
    void timein(int );//用离午夜的时间进行计时的初始化

    unsigned int getHour() const;//得到小时
    unsigned int getMinute() const;//得到分钟
    unsigned int getSecond() const;//得到秒

    void printUniversal() const;//打印时间
    void printStandard() const;//打印时间
private:
    unsigned int hour;//小时
    unsigned int minute;//分钟
    unsigned int second;//秒
    unsigned int alltime;//自午夜以来的秒数
    time_t tdata1;//time库定义的时间变量1
    time_t tdata2;//time库定义的时间变量2

};

#endif // TIME_H
