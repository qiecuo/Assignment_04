
#include<iostream>
using namespace std;
#include"DeckOfCards.h"
#include"Card.h"
DeckOfCards::DeckOfCards()
{
    string color[]={"黑桃","红桃","方块","梅花"};
    string point[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<13;j++)
        {
            this->card.pushback(Card(color[i]),point[j]);
        }
    }
}//花色和数字组合
void DeckOfCards::display()
{
    for(int i=0;i<52;i++)
    {
        cout<<this->card[i].point<<this->card[i].color<<endl;
    }
}//输出所有牌
