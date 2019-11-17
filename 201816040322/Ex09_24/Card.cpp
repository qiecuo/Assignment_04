// Assignment_04: Card.cpp
// Member-function definitions for class Card.
#include <iomanip>
#include "Card.h"

using namespace std;

array <string,13> Card::Face={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
array <string,4> Card::Suit={"hearts","diamonds","clubs","spades"};
int Card::facetotal=13;
int Card::suittotal=4;

Card::Card(int FA,int SU)
{
    if( FA >= 0 && FA <= 12 )
        face = FA;
    if( SU >=0 && SU <= 3 )
        suit = SU;
}

string Card::toString() const
{
    return Face[face] + " of " + Suit[suit];
}
