#include <ctime>

class Time
{
public:
   Time(int , int , int  );
   void setTime( int ,int ,int );// set hour. minute. second
   Time();//set hour. minute. second
   void setHour( int );//set hour (after validation)
   void setMinute( int );
   void setSecond( int );
   unsigned int getHour() const;
   unsigned int getMinute() const;
   unsigned int getSecond() const;

   void printUniversa1() const;
   void printStandard() const;
   void tick();
private:
   unsigned int hour;
   unsigned int minute;
   unsigned int second;
};
