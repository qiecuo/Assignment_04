#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
public:
    Time();//default constructor
    Time(int );//constructor with a parameter
    void setTime(int);//the function to set the time
    unsigned int getHour()const;//the function to get the hour
    unsigned int getMinute()const;//the function to get the minute
    unsigned int getSecond()const;//the function to get the second
    void tick();//to increase second
    void printUniversal()const;//print the time with universal form
    void printStandard()const;//print the time with standard form
private:
    unsigned int second;
    void increament()//a tool function to judge the legitimacy of the second
    {
        if(second==86400)
            second=0;
    }
};


#endif // TIME_H_INCLUDED
