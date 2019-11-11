#include "Card.h"
Card::Card(int faceNumber,int suitNumber)//constructor with two parameter
:face(faceNumber),suit(suitNumber)
{

};
string Card::toString()//a function to return the value with a string form
{
    return toFace()+" of "+toSuit();
}
int Card::getFace()//to return the face of the poker
{
    return face;
}
int Card::getSuit()//to return the suit of the poker
{
    return suit;
}
