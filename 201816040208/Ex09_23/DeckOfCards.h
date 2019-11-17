#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include<vector>
#include"card.h"

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();  //初始化52张牌
    void shuffle(); //洗牌
    Card dealCard(int );    //返回下一张牌
    bool moreCards();   //判断是否有牌去洗
    Card getCard(); //返回牌

private:
    vector< Card > deck;
    int currentCard;    //当前牌

};
#endif // DECKOFCARDS_H
