#include"card.h"

Card::Card(int a, int b)
{
    face = a;
    suit = b;
}

string Card::toString()
{
    string a = faces[face] + " of " + suits[suit];
    return a;
}

int Card::getFace()
{
    return face;
}

const string Card::faces[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
const string Card::suits[4] = {"heart","diamond","club","spade"};
