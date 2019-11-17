//browsing a website
#include<iostream>
#include<vector>
#include"Card.h"//class Card
using namespace std;
class DeckOfCards//define class
{
public:
    DeckOfCards();//constructor
    void shuffle();//shuffle the cards
    Card dealCard1();
    Card dealCard2();
    bool moreCards();//judge the cards
private://data members
    vector<Card>deck;
    size_t currentCard;
};
