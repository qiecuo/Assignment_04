#include<bits/stdc++.h>
#include"Card.h"
using namespace std;
class DeckofCard
{
public:
    DeckofCard();//初始化
    void suffle();//洗牌
    Card dealCard();//下一张牌
    bool moreCard();//还有牌吗
private:
    vector<Card> deck;
    int currentCard;//牌数

};
