#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time();//Constructor function
    void printStandard()const;//output standard time
    unsigned int getAllSecond()const;//get total seconds
    Time tick();//second add 1
private:
    unsigned int allsecond;//total seconds of data members

};
#endif // TIME_H_INCLUDED
