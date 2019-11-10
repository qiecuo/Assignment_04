
#include <iostream>
using namespace std;

#include "Card.h"

Card::Card(int faceNumber,int suitNumber)
{
    face=faceNumber;
    suit=suitNumber;
}

string Card::toString()              //杩斿洖鑺辫壊鍜岀墝
{
    return faceName[face]+"-"+suitName[suit];
}

int Card::getFace()                   //鑾峰彇鐗?
{
    return face;
}

int Card::getSuit()                //鑾峰彇鑺辫壊
{
    return suit;
}

const string Card::faceName[totalFace]=                 //瀹氫箟13寮犵墝
{
    "A","2","3","4","5","6","7","8","9","10","J","Q","K"
};

const string Card::suitName[totalSuit]=              //瀹氫箟4绉嶈姳鑹?
{
    "红心","黑桃","梅花","方块"
};
