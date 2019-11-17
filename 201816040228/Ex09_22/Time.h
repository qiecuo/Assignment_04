#include <string> // program uses C++ standard string class
#ifndef TIME_H
#define TIME_H

#include <math.h>
// Time class definition
class Time
{
public:
    unsigned int Year;
    unsigned int Month;
    unsigned int Day;
    unsigned int Hour;
    unsigned int Minute;
    unsigned int Second;
    Time();//构造函数Time
    void setTime();//s表时间
    void setSecond(unsigned int);
    void setMinute(unsigned int);
    void setHour(unsigned int);
    void tick();//递增函数
    unsigned int getSecond();
    unsigned int getMinute();
    unsigned int getHour();
    void printUniversal();
    void printStandard();

}; // end class

#endif
