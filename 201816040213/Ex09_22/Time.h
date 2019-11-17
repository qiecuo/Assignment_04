#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time( int, int, int ); // Time constructor
    Time();//Time constructor get the time

    Time &setTime( int, int, int ); // function to set time
    Time &setHour(int ); // function to set hour
    Time &setMinute(int ); // function to set minute
    Time &setSecond(int ); // function to set second
    unsigned int getHour() const;  // function to retrieve the hour
    unsigned int getMinute() const;  // function to retrieve the minute
    unsigned int getSecond() const;  // function to retrieve the second

    void printUniversal() const; //print time in universal-time format
    void printStandard() const; //print time in standard-time format

    void tick(); //total seconds plus one
private:
    unsigned int totalSeconds;
}; // end class Time

#endif // TIME_H_INCLUDED
