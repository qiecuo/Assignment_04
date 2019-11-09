#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    explicit Time(int=0,int=0,int=0);//default constructor

    //set functions
    void settime(int ,int ,int );//set hour ,minute,second
    void sethour(int);
    void setminute(int);
    void setsecond(int );
    void settimebytime();//set time using time class get time from  now

    //get functions
    int gethour()const;//return hour
    int getminute()const;//return minute
    int getsecond()const;//return second

    void printUniversal()const;//output time in universal time
    void printStandard()const;//output time in standard time
    void printsecond()const;//output time in seconds
    void printbysecond()const;
    void tick();
private:
    int hour;//0-23
    int minute;//0-59
    int second;//0-59
};//end class Time


#endif // TIME_H_INCLUDED
