//Assignment_04: Time.h
//Time class containing a constructor with default arguments.
//Member functions defined in Time.cpp

//prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

//Time class definition
class Time
{
public:
    explicit Time(int = 0,int = 0,int =0);//default constructor

    //set function
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);//set second (after validation)

    //get function
    int getHour() const;//return hour
    int getMinute() const;//return minute
    int getSecond() const;//return second

    void tick();//increasing time object

    void printUniversal() const;//output time in universal-time format
    void printStandard() const;//output time in standard-time format
private:
    time_t second=0;
};//end class Time

#endif // TIME_H
