#ifndef TIME_H
#define TIME_H
#include<time.h>
class Time
{
public:
    explicit Time(int ,int ,int );

    void timechange();//use time function assign values
    void printTime();//output the time values in the time function
    void setTime(int ,int ,int );//Initialization time1
    /*Initialization hour minute second*/
    void setHour(int );
    void setMinute(int );
    void setSecond(int );

    void timetick();//Add one second to the time

    void Night_time(int );//Initialization time2

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    /*Print out the corresponding time*/
    void printUniversal() const;
    void printStandard() const;
private:
    time_t time1;
    time_t time2;

    unsigned int hour;
    unsigned int minute;
    unsigned int second;


};

#endif // TIME_H
