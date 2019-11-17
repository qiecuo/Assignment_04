#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include"Card.h"
#include<vector>

class DeckOfCards
{
    vector<Card>deck;
    int currentCard = 0;
public:
    DeckOfCards(int);
    DeckOfCards shuffle();
    Card dealCard();
    bool moreCard();
};


#endif // DECKOFCARDS_H_INCLUDED
