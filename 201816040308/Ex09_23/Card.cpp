#include <bits/stdc++.h>
using namespace std;

#include "Card.h"

string Card::Face[13]={"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string Card::Suit[4]={ "club", "diamond", "hearts", "spade"};

Card::Card(int x,int y)
{
    face=x;
    suit=y;
}

string Card::tostring()
{
    return Face[face]+" "+"of"+" "+Suit[suit];
   // cout<<Face[face]<<' '<<"of"<<' '<<Suit[suit]<<endl;
}

int Card::getface()
{
    return face;
}

int Card::getsuit()
{
    return suit;
}
