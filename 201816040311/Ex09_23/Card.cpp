#include <iostream>
#include "Card.h"

using namespace std;

//default constructor of the Card
Card::Card()
{

}

//Initialization constructor of the Card
Card::Card(int a, int b)
{
    setface(a);
    setsuit(b);
}
//set face
void Card::setface(int a)
{
    face=a;
}
//set suit
void Card::setsuit(int b)
{
    suit=b;
}
//Return the string object
string Card::toString()
{
    return faceID[face]+" of "+SUIT[suit];
}
