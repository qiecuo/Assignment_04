#ifndef TIME_H
#denife TIME_H

using namespace std;

class time
{
public:
    explicit Time(int = 0,int = 0,int = 0);//default construstor
    //set function
    void setTime(int ,int ,int );//set hour,minute,second
    void setHour( int );//set hour
    void setMinute( int );//set minute
    void setSecond( int );//set second

    //get functioin
    unsigned int getHour() const;//return hour
    unsigned int getMinute() const;//return minute
    unsigned int getSecond() const;//return second

    int printsecond();
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};//end class Time

#endif

