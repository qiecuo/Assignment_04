#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>
#include "Card.h"
using namespace std;

class DeckOfCards
{
private:
    int currentCard=0;
    vector<Card>deck;//create a vector
public:
    DeckOfCards();//default constructor of the DeckOfCards
    void shuffle();//Random shuffle
    Card dealCard();//Check if there is still work
    bool moreCards();//retrun next card
};

#endif // DECKOFCARDS_H_INCLUDED
