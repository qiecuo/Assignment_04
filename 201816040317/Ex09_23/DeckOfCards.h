#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include <vector>

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    void dealCard();
    bool moreCards();
private:
    int currentCard;
    vector<Card> deck;
};


#endif // DECKOFCARDS_H_INCLUDED
