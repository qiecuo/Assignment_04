#include<iostream>
#include <stdlib.h>
#include <time.h>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;
DeckOfCards::DeckOfCards(int a)//赋值52个卡片
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=1;j<14;j++)
        {
            deck.push_back(Card(j,i));
        }
    }
    currentcard=a;
}
void DeckOfCards::shuffle()//洗牌函数
{
     srand(time(0));//初始化随机数生成器
    int i;
    for(i=0;i<52;i++)
    {
        Card tem(0,0);
        int r;
        r = rand() % 52;//产生 0—51之间的数字
        tem=deck[i];
        deck[i]=deck[r];
        deck[r]=tem;
    }

}
void DeckOfCards::dealcard()//输出一张牌
{
    deck[currentcard].tostring();
    currentcard++;
    if(morecards())
        cout<<"No cards!"<<endl;
}
bool DeckOfCards::morecards()//判断是否还有牌
{
    return currentcard==52?true:false;
}
void DeckOfCards::output()//52张牌全部输出
{
    int i;
    for(i=0;i<52;i++)
    {
        deck[i].tostring();
    }
}
