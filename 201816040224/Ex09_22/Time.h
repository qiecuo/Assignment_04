#ifndef TIME_H
#define TIME_H
class Time
{
public:
    Time(int Hour=0,int Minute=0,int Second=0);//构造time类函数，并且将其中的三个参数初始化为0
    void setHour(const int Hour);
    void setMinute(const int Minute);
    void setSecond(const int Second);
    int getHour()const;
    int getMinute()const;
    int getSecond()const;
    void printUniversal()const;
    void printStandard()const;
private:
    int hour;
    int minute;
    int second;
};
#endif // TIME_H
