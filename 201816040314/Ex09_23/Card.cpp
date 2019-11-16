#include "Card.h"

string  Card::faceArray[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string  Card::suitArray[4]={"黑桃","红桃","梅花","方块"};
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
