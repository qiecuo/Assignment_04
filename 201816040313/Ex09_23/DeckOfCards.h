#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>
#include "Card.h"
#include <string>
using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();//constructor function
    void shuffle();//function for shuffle the cards
    Card dealCard();//function for back to next card
    bool moreCards();//function for judge whether or not there are cards to deal with
    void output();
    void sendoutCard();//function for deal cards
private:
    vector<Card>deck;
    int currentCard;
};


#endif // DECKOFCARDS_H_INCLUDED
