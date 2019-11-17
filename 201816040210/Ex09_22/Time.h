using namespace std;

class Time
{
public:
    explicit Time( int = 0,int = 0,int = 0 );//constructor function
    Time();//constructor function
    void setTime( int, int, int );//function to set time
    void setHour( int );//function to set hour
    void setMinute( int );//function to set minute
    void setSecond( int );//function to set second
    void tick();//next second

    int getHour() const;//function to get hour
    int getMinute() const;//function to get minute
    int getSecond() const;//function to get second

    void printStandard() const;//function to print standard time
    void printUniversal() const;//function to print universal time
private:
    int totalSeconds;
};
