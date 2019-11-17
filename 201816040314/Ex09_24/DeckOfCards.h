#ifndef DECKOFCARD_H_INCLUDED
#define DECKOFCARD_H_INCLUDED
#include "Card.h"
#include <vector>
class DeckOfCards
{

public:
    DeckOfCards();//default constructor
    void shuffle();//shuffle function
    Card &dealCard();//a function to return the next card
    bool moreCards();//a function to judge whether there have cards
    void hangOutCard();
private:
    //vector <Card> deck( 52 );
    int currentCard;//data number currentCard
    int currentCardSuit;//data number currentCardSuit
    vector <Card> deck;//a vector to store the cards
    int number;//to record the number of the card

};

#endif // DECKOFCARD_H_INCLUDED
