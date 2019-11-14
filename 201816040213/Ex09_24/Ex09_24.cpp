#include <iostream>
#include "Card.h"  // include definition of class Card from Card.h
#include "DeckOfCards.h"  // include definition of class DeckOfCards from DeckOfCards.h

using namespace std;

int main()
{
    DeckOfCards d; // create a DeckOfCards object
    d.shuffle(); //shuffle the cards
    d.dealCard(5); //deal cards
    cout<<endl;
    d.onePair();//function to judge whether there is a pair
    d.twoPairs();//function to judge whether there are two pairs
    d.threeSameCards( );//function to judge whether there are three cards of same face
    d.fourSameCards( );//function to judge whether there are four cards of same face
    d.sameSuit( );//function to judge whether these cards have the same suit
    d.continuousFace( );//function to judge whether these cards have a continuous face

    return 0;
}
