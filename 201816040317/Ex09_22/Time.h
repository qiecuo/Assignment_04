#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
        Time();

        void setTime(time_t,time_t,time_t);
        /*void setHour(int);
        void setMinute(int);
        void setSecond(int);*/
        void tick();
        int getHour();
        int getMinute();
        int getSecond();

        void printUniversal() ;
        void printStandard() ;
private:


       int hour;
       int  minute;
       int  second;

};//end of class

#endif // TIME_H_INCLUDED
