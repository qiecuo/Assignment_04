#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H
#include "Card.h"
#include<vector>
using namespace std;
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    void drive();
    Card dealCard();
    bool moreCard();
private:
    int currentCard;
    vector<Card> deck;

};

#endif


