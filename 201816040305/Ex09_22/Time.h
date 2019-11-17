
class Time
{
public:
    //Declare functions
    Time() ;
    void tick() ;
    void display();
    string amORpm();
    int  setSecond();
private:
    time_t currentTime;
    int hour , minute , second  ,totalsecond ;
}; // end class Time

