#include "Card.h"
Card::Card(int faceNumber,int suitNumber)//constructor with two parameter
:face(faceNumber),suit(suitNumber)
{

};
string Card::toString()//a function to return the string of the value
{
    return toFace()+" of "+toSuit();
}
int Card::getFace()//a function to return the face
{
    return face;
}
int Card::getSuit()//a function to return the suit
{
    return suit;
}
