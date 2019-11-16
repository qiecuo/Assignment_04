#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

using namespace std;
class Time
{
public:
    Time(int);
    Time(int ,int ,int);
    void settime(int ,int ,int);
    void sethour(int);
    void setminute(int);
    void setsecond(int);

    unsigned int gethour() const;
    unsigned int getminute() const;
    unsigned int getsecond() const;

    void printfuniversal() const;
    void printfstandard() const;
    void tran();
    void tick();
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    int curtime;
};

#endif


