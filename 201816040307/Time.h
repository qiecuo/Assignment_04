class Time
{
private:
    //define the elements of time hour minute and second
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

    //define current time
    unsigned int curTime;

    //private function to set time
    void setTime(int, int, int);
public:
    //constructors
    Time(int);
    Time(int, int , int);

    //the functions set and get hour minute second
    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;

    void setHour(int);
    void setSecond(int);
    void setMinute(int);

    //two function to show the time
    void printUniversal() const;
    void printStandard() const;

    //the function to transform the time
    void trans();

    //define tick function
    void tick();


};
