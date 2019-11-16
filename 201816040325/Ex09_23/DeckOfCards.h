#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<vector>
#include "Card.h"
using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();//用于洗牌
    void dealCard(int );//返回下一张牌
    bool moreCards(int );//是否还有牌要处理
    void setCurrentcards(int );
    int getCurrentcards();
private:
    vector<Card>deck;
    int currentCards;
};

#endif // DECKOFCARDS_H_INCLUDED
