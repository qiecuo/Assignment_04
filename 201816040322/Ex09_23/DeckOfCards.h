// Assignment_04: DeckOfCards.h
// Definition of DeckOfCards class.
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"
#include <vector>

class DeckOfCards
{
public:
    DeckOfCards ();// constructor initializes

    void shuffle();// the shuffle function

    void dealCard();// the dealCard  function
    bool moreCards();
private:
    //// data member
    std::vector < Card > deck;
    int currentCard;
    static int total;
};

#endif // DECKOFCARDS_H
