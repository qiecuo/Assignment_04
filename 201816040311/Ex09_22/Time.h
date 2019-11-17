#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
private:
    int temp;
public:
    Time();
    Time(long int=0);
    void setTime(long int);
    int getHour();
    int getMinute();
    int getSecond();
    void display();
    void tick(int);

};

#endif // TIME_H_INCLUDED

