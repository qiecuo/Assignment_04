#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
private:
    int temp;//temp variable
public:
    Time();//default constructor of the Time
    Time(long int=0);//Initialization constructor of the Time
    void setTime(long int);//set Time
    int getHour();//get hour
    int getMinute();//get minute
    int getSecond();//get second
    void tick(int);//add second
    void display();
};

#endif // TIME_H_INCLUDED
