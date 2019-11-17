#include <string> // program uses C++ standard string class
#include <iostream>

using namespace std;
#ifndef CARD_H
#define CARD_H

// Card class definition
class Card
{
public:
   Card(int ,int);//定义构造函数
   int getFace( );
   int getSuit( );
   string toString();//返回Card
private:
    int face;//面值
    int suit;//花色
    static const string fface[13] ;//13种不同牌
    static const string ssuit[4] ;//4种花色
}; // end class Invoice

#endif
