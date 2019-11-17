#include <iostream>
#include "Card.h"
using namespace std;
//constructor function
Card::Card( int f,int s )
{
    face = f%13;
    suit = s%4;
}//end function
//function to return card
string Card::toString()
{
    string a = Face[face];
    string b = Suit[suit];
    return a + " of " + b;
}//end function
string Card::Face[13]={"K","A","2","3","4","5","6","7","8","9","10","J","Q"};
string Card::Suit[4]={"Heart","Diamond","Spade","Club"};
