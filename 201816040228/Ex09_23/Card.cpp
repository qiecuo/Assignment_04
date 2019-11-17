#include <iostream>
#include <string>
using namespace std;

#include "Card.h"
Card::Card(int f,int s)//初始face, suit;
{
    face=f;
    suit=s;
}
string Card::toString()//return Card
{
    return fface[face] + " of " +ssuit[suit];
}


int Card::getFace( )
{
    return face;
}


int Card::getSuit( )
{
    return suit;
}

const string Card::fface[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//面值

const string Card::ssuit[4] = {"heart","diamond","club","spade"};//花色
