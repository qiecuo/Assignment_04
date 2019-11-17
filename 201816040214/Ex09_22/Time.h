#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
//Time.h
class Time
{
public:
    //explicit Time(int=0, int=0, int=0);
    explicit Time(int);
    //define set and get functions
    void setHour(int);
    void setMinute(int);

    unsigned int getHour() ;
    unsigned int getMinute() ;
    unsigned int getSecond() ;
    unsigned int getAll_seconds() ;
    void printUniversal() ;
    void printStandard() ;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int all_seconds;
};

//Ex09_07 - Time.h
/*class Time
{
public:
	Time(int,int,int);
	~Time();
	void setTime(int,int,int);
	void printStandard();
	void tick();
private:
	int hour;
	int minute;
	int second;
};*/

#endif // TIME_H_INCLUDED
