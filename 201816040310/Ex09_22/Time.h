#ifndef TIME_H
#define TIME_H
#include <ctime>
class Time
{
public:
    Time(time_t);
    void tick();
    void setTime(time_t);
	void setTime(int,int,int);
    int getHour();
    int getMinute();
    int getSecond();
    void printUniversal();
    void printStandard();
	void setHour(int h);
	void setMinute(int m);	
	void setSecond(int s);
private:
    int sec;
    /* data */
};
#endif