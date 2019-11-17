#include <iostream>
using namespace std;
#include <ctime>

class Time
{
public:
    Time();
    void setSecond(time_t);
    time_t getSecond()const;
    void sethour(int h);
    void setminute(int m);
    void setsecond(int s);
    int gethour()const;
    int getminute()const;
    int getsecond()const;
    void printseconds();
    void printtime();
    void tick();
private:
    time_t Second;
    int hour;
    int minute;
    int second;
};
