
#include <iostream>
using namespace std;

#include "Card.h"

Card::Card(int faceNumber,int suitNumber)
{
    face=faceNumber;
    suit=suitNumber;
}

string Card::toString()              //返回花色和牌
{
    return faceName[face]+"-"+suitName[suit];
}

int Card::getFace()                   //获取牌
{
    return face;
}
 
int Card::getSuit()                  //获取花色      
{
    return suit;
}

const string Card::faceName[totalFace]=                 //创建13张牌
{
    "A","2","3","4","5","6","7","8","9","10","J","Q","K"
};

const string Card::suitName[totalSuit]=              //创建4种花色
{
    "红心","黑桃","梅花","方块"
};
