#ifndef TIME_H
#define TIME_H

class Time
{
public:
     Time();
    void setTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    int Second();//用秒显示
    void printUniversal();
    void printStandard();
    void tick();//增加到下一秒
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};
#endif // TIME_H
