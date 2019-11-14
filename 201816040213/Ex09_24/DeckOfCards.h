#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"  // include definition of class Card from Card.h
using namespace std;

class DeckOfCards
{
public:
    DeckOfCards(); //DeckOfCards constructor
    void shuffle(); //shuffle the cards
    Card dealCard( int ); //deal cards
    bool moreCards(); //judge if there are any remaining cards

    void onePair( ); //function to judge whether there is a pair
    void twoPairs( ); //function to judge whether there are two pairs
    void threeSameCards( ); //function to judge whether there are three cards of same face
    void fourSameCards( ); //function to judge whether there are four cards of same face
    void sameSuit( ); //function to judge whether these cards have the same suit
    void continuousFace( ); //function to judge whether these cards have a continuous face
private:
    vector < Card > deck;
    int currentCard; //next card
}; // end class DeckOfCards
#endif // DECKOFCARDS_H_INCLUDED

