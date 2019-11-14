#include <string>
#include "Card.h" // include definition of class Card from Card.h

 // Card constructor
Card::Card( int f, int s )
{
    setFace(f);
    setSuit(s);
}

// function to set the face
void Card::setFace( int f )
{
    face = f;
}

int Card::getFace ( )
{
    return face; // function to retrieve the face
}

// function to set the suit
void Card::setSuit( int s )
{
   suit = s;
}

int Card::getSuit ( )
{
    return suit; // function to retrieve the suit
}

string Card::toString( )
{
    //Store the information of the card into the string
    return fa[face-1] + " of " + su[suit-1];
}

string Card::fa[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"}; //card's face
string Card::su[4] = {"Heart","Diamond","Spade","Club"}; //card's suit
