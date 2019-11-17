#include<iostream>
#include"Card.h"

using namespace std;

string Card::f[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::s[4] = {"spade","heart","club","dianmond"};

Card::Card(int f1,int s1):face(f1),suit(s1)
{

}

Card Card::toString()
{
    string strFace = f[face];
    string strSuit = s[suit];
    fos = strFace + " of " + strSuit;
    return *this;
}

string Card::getFos()
{
    toString();
    return fos;
}
void Card::setFace(int f1)
{
    face = f1;
}

void Card::setSuit(int s1)
{
    suit = s1;
}

int Card::getFace()
{
    return face;
}

int Card::getSuit()
{
    return suit;
}
