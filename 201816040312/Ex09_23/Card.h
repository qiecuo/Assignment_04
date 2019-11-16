//Card.h
#ifndef CARD_H
#define CARD_H

#include<array>
using namespace std;
class Card
{
public:
    Card(int,int);//构造函数
    void setfands(int,int);//face和suit的set函数
    void storage();//储存两个静态数组
    void tostring();//输出face和suit
private:
    int face,suit;//面值和花色
    static array<string,4> s1;//花色静态数组
    static array<string,13> s2;//面值静态数组
};
#endif CARD_H
