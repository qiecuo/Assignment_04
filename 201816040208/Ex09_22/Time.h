
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time(int, int, int);
    void printTime();
    void tick();
    void setTime(int, int, int);
private:
    int hour;
    int minute;
    int second;


};
#endif
