class Time
{
public :
    Time(int =0,int=0,int=0);///初始化
    int gethour();///获取小时
    int getminuter();///获取分钟
    int getsecond();///获取秒
    void tick();///时间增加
private:
    int second;
};
