#include "Card.h"
#include <string>

string Card::strface[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::strsuit[4]={"Spade","Heart","Club","Diamond"};

int Card::cardFace=13;
int Card::cardSuit=4;

Card::Card(int f,int s)
:face(f),suit(s)
{

}

string Card::toString()
{
    return strface[face]+" of "+strsuit[suit];
}


