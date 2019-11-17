#include <iostream>
#include "Card.h"

using namespace std;

Card::Card()
{

}
Card::Card(int a, int b)
{
    setface(a);
    setsuit(b);
}
void Card::setface(int a)
{
    face=a;
}
void Card::setsuit(int b)
{
    suit=b;
}

string Card::toString()
{
    return faceID[face]+" of "+SUIT[suit];
}

