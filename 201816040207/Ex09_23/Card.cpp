#include<iostream>
#include"card.h"
#include<string>

Card::Card(int f,int s)
{
    face = f;
    suit = s;
}
string Card::toString()
{
    return facedata[face]+" of "+suitdata[suit];
}
int Card::getface()
{
    return face;
}
int Card::getsuit()
{
    return suit;
}
//面值的全部string数组
const string Card::facedata[facenumber]=
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
//花色的string数组
const string Card::suitdata[suitnumber]=
{"heart","diamond","club","spade"};


