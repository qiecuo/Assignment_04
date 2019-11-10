#ifndef TIME_H
#define TIME_H

class Time
{
public:
   explicit Time(int now);
   void setTime(int,int,int);       //设置时间
   void setHour(int);               //设置时
   void setMinute( int );            //设置分
   void setSecond(int );           //设置秒
   void tick();

   int getHour() ;                 //获取时分秒
   int getMinute() ;
   int getSecond() ;

   void printStandard()  ;        //打印输出函数

private:
   int hour;
   int minute;
   int second;

};

#endif
