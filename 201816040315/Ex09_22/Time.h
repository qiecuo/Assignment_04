//Time.h
//Time class definition
//prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

//Time class definition
class Time
{
public:
    Time (int = 0,int = 0,int = 0);//declare data member
    void setHour( int );//function to set hour
    void setMinite( int );//function to set minitte
    void setSecond( int );//function to set second
    int getHour();//function to retrieve Hour
    int getMinite();//function to retrieve minite
    int getSecond();//function to retrieve second
    int totalSecond();//function to retrieve total second
    void timeTick();//increase the time
private:
    int Hour;//hour for Time
    int Minite;//minite for Time
    int Second;//second for Time

};
#endif // TIME_H
