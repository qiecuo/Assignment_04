#include<iostream>
#include<string>
#ifndef CARD_H
#define CARD_H
using namespace std;

class Card
{
public:
    static const int facenumber = 13;//总的牌的大小量
    static const int suitnumber = 4;//总的牌的花色量

    Card(int ,int );
    int getface();//得到牌的面值
    int getsuit();//得到牌的花色
    string toString();//展示牌的面值与花色


private:
    int face;//面值
    int suit;//花色
    static const string facedata[facenumber];
    static const string suitdata[suitnumber];


};
 #endif


