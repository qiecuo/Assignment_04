#include <iostream>
using namespace std

include "Card.h"
static array < string, 12 > f = { A,2,3,4,5,6,7,8,9,10,J,Q,K } ;
static array < string, 3 > s = { 红桃,黑桃,梅花,方块 };
Card::Card( int face, int suit )
{
    setCard( face, suit );
}
void Time::setCard( string fa, string su )
{
    setFace( fa );
    setSuit( su );
}
void Time::setFace( string fa )
{
    face = fa;
}
string Time::getFace()
{
    return face;
}
void Time::setSuit( string su )
{
    suit = su;
}
string Time::getSuit()
{
    return suit;
}
Card Card::toString()
{

}
