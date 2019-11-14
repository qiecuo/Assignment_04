#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;

class Card
{
public:
    Card(int , int);    //初始化
    string toString();  //返回字符串
    int getFace();  //得到牌的点数
private:
    int face, suit;
    static const string faces[13];  //点数
    static const string suits[4];   //花色

};
#endif // CARD_H
