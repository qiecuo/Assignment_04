#include<iostream>
#include"card.h"
#include<string>

Card::Card(int fa,int su)
{
    face = fa;
    suit = su;
}
string Card::toString()
{
    return facee[face]+" of "+suitt[suit];
}
int Card::getface()
{
    return face;
}
int Card::getsuit()
{
    return suit;
}
//face array
const string Card::facee[facenumber]=
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
//suit array
const string Card::suitt[suitnumber]=
{"heart","diamond","club","spade"};


