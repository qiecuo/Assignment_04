#include"Time.h"
#include<bits/stdc++.h>
using namespace std;
Time::Time(int h,int m,int s):second(h*3600+m*60+s){}///初始化
int Time::gethour()
{
    int h=second;
    h-=(second%60);///减去秒数
    h/=60;h-=(h%60);///减去分钟
    h/=60;///获取总小时数
return h%=12;

}
int Time::getminuter()///同上
{
   int m=second;
   m-=(second%60);
   m/=60;
   return m%=60;
}
int Time::getsecond()///同上
{
    return second%60;
}
void Time::tick()
{
    second++;
}

