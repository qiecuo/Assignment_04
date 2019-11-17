#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>
#include "Card.h"
using namespace std;
class DeckOfCards
{
public:
    DeckOfCards();//constructor function
    void shuffle();//function to shuffle
    Card dealCard();//function to return next card
    bool moreCards();//function to judge remaining cards
private:
    vector < Card > deck;//deck is a vector of card
    int currentCard;
};


#endif // DECKOFCARDS_H_INCLUDED
