#include <string> // program uses C++ standard string class
#include <vector>

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"

#include <math.h>
// Card class definition
class DeckOfCards
{
public:
   DeckOfCards();//构造函数DeckOfCards
   void shuffle();//洗牌函数
   Card dealCard(int);//发牌函数
   bool moreCard();//检查是否有多的牌
private:
    vector<Card> deck;//将牌添加到vector末尾
    int currentCard;//记录牌数
}; // end class Invoice

#endif
