#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"  //Call card.h
#include <vector>

class DeckOfCards
{
    friend class DeckOfCard; //Create a friend function
public:
    DeckOfCards ();
    void shuffle();
    void dealCard();
    bool moreCards();
private:
    std::vector < Card > deck; //Create a vector of type Card
    int currentCard;
    static int number;
};

#endif
