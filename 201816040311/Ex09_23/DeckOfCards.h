#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>
#include "Card.h"
using namespace std;

class DeckOfCards
{
private:
    int currentCard=0;
    vector<Card>deck;
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
};

#endif // DECKOFCARDS_H_INCLUDED

