#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(int a,int b)
{
    if(a>0&&a<15)
    {
        face=a;
    }
    if(b>0&&b<5)
    {
        suit=b;
    }
}

array <string,14>Card::Face={"0","Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
array <string,5>Card::Suit={"0","Heart","Diamond","Club","Spade"};

string Card::toString()
{
    return Face[face]+"of"+Suit[suit];
}
