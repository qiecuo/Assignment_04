#ifndef CARD_H
#define CARD_H
#include<bits/stdc++.h>
using namespace std;

class Card
{
public:
    Card(int ,int);//初始化
    void setfaces(int );
    void setsuit(int );
    string getfaces();///获取花色
    string getsuit();//获取牌面
    string tostring();//返回花色及牌面
private:
    int faces;
    int suit;
   static string cardfaces[4];//花色
   static string cardsuit[13];//牌面

};
#endif // CARD_H
