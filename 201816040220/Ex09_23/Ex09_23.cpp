#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;


int main()
{
    DeckOfCards a;           //创建a对象
    a.shuffle();              //洗牌
    a.dealCard();              //输出牌
    return 0;
}
