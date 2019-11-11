#include<iostream>
#include<vector>
#include"Card.h"

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();//构造函数
    void shuffle();//洗牌函数
    Card dealcard(int );//返回下一张牌函数
    void beforecard(int );//前几张牌的函数
    bool morecard();//返回bool值，是否有牌要处理
    void judge(int );//判断对子，花色的函数



private:
    vector<Card> deck;//vector类型的card类型的记录数据数组
    int currentCard;//最近的牌


};


