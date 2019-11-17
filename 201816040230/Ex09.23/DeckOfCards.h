#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include <iostream>
#include<vector>
#include"Card.h"
class DeckOfCards
{
public:
    DeckOfCards();
    Card dealCard();
    bool moreCards();
    void shuffle();
    void print();

private:
    int currentCard;

 vector<Card>deck;
};
#endif // DECKODCARDS_H
//参考王嘉豪的
