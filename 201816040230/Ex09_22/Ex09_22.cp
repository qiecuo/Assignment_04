#include <iostream>
#include"Time.h"
using namespace std;
const int maxticks= 10;
int main()
{
    Time t;
    int h,m,s;
    t.setTime(0,0,0);
    cout<<"请输入时分秒，中间用空格隔开"<<endl;
    cin>>h>>m>>s;
    t.setHour(h);
    t.setMinute(m);
    t.setSecond(s);
     cout<<"\nThe Universal is:"<<endl;
    t.printUniversal();
    cout<<"\nThe Standard is:"<<endl;
     for ( int i= 1; i < maxticks; ++i )//增加1秒循环
   {
      t.printStandard();
      cout<<"  The all second is:";
      cout<<t.Second()<<"s";
      cout <<endl;
      t.tick();
   }
    return 0;
}

