#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
public:
    explicit Time(int);
    void settime(int);//将值赋给second
    unsigned int gethour()const;//返回小时
    unsigned int getminute()const;//返回分钟
    unsigned int getsecond()const;//返回秒
    void printuniversal()const;//输出24小时制的时间
    void printstandard()const;//输出12小时制的时间
    void tick();//将秒加一
private:
    unsigned int second;//数据成员秒
};
#endif // TIME_H
