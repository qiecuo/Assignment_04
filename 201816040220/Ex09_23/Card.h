#ifndef _COMMON
#define _COMMON
#include <string> // program uses C++ standard string class
using namespace std;


class Card
{
public:
         static const int totalFace=13;      //创建13张牌，4种花色
         static const int totalSuit=4;

         Card(int,int);
         int getFace();                     //获取牌
         int getSuit();                       //获取花色
         string toString();                //返回花色和牌


private:
        int face,suit;
        static const string faceName[totalFace]; //定义13张牌，4种花色
        static const string suitName[totalSuit];

};
#endif
