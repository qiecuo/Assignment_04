#ifndef TIME_H
#define TIME_H
#include <ctime>
class Time
{
public:
    Time(time_t);                // arg's type time_t
    void tick();                 // add one second to sec
    void setTime(time_t);        // change time
    void setTime(int, int, int); // h,m,s to change the time
    int getHour();
    int getMinute();
    int getSecond();
    void printUniversal(); //
    void printStandard();  //
    Time &setHour(int h);   // change hour
    Time &setMinute(int m); // change minute
    Time &setSecond(int s); // change second

private:
    int sec; // Seconds since midnight
};
#endif