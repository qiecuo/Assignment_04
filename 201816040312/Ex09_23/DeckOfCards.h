//DeckOfCard.h
#include<vector>
#include"Card.h"

using namespace std;
class DeckOfCards
{
public:
    DeckOfCards(int=0);//构造函数
    void shuffle();//洗牌函数
    void output();//全部输出
    void dealcard();//输出一张牌
    bool morecards();//判断是否还有牌
private:
    int currentcard;//记录数组的下标
    vector<Card> deck;
};
