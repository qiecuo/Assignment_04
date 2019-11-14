#include<bits/stdc++.h>
#include"Time.h"
using namespace std;
int main()
{

	//获取当前时间
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << "本地时间:" << asctime(timeinfo);
	Time date1(timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec);///初始化
	for(int i=0;i<=60*60;i++)
    {
        cout<<setw(2)<<setfill('0')<<date1.gethour()<<":"<<setw(2)<<setfill('0')<<date1.getminuter()<<":"<<setw(2)<<setfill('0')<<date1.getsecond();///标准输出
        int flag=(timeinfo->tm_hour>=12)?1:2;///判读AM,PM
          if(!flag%2)cout<<" AM"<<endl;
          else cout<<" PM"<<endl;
        date1.tick();///秒数增加
    }

	return 0;
}

