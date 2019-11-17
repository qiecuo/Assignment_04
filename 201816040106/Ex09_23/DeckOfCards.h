#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include"Card.h"
#include<vector>
class DeckOfCards
{
private:
    int currentCard;//下一个将要处理的牌的整形值
    vector<Card> deck;//存储洗牌发牌后的Card
public:
    DeckOfCards();
    void shuffle();//9.23里面的洗牌
    void shuffle1();//9.24里面的洗牌
    Card dealCard();//返回下一张牌
    bool moreCards();//9.23判断是否还有牌要处理
    bool moreCards1();//9.24判断是否还有牌要处理
    void print();//9.23输出结果
    void print1();//9.24输出结果
    bool hasOnePair();//判断是否有一副对子
    bool hasTwoPair();//判断是否有两副对子
    bool hasThreeSameFace();//判断是否有3张同号牌
    bool hasFourSameFace();//判断是否有4张同号牌
    bool hasFiveSameSuit();//判断手上是否有同花
    bool hasTongshun();//判断是否有同顺
};
#endif
