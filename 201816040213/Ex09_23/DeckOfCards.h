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

private:
    vector < Card > deck;
    int currentCard; //next card
}; // end class DeckOfCards
#endif // DECKOFCARDS_H_INCLUDED
